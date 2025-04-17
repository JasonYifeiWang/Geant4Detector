#include "DetectorConstruction.h"
#include "EnergyMomentumFinder.h"

#include "G4Material.hh"
#include "G4NistManager.hh"
#include "G4Box.hh"
#include "G4Sphere.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4AutoDelete.hh"
#include "G4GeometryManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4SDManager.hh"
#include "G4VisAttributes.hh"
#include "G4Colour.hh"

G4ThreadLocal G4GlobalMagFieldMessenger* DetectorConstruction::m_magneticFieldMessenger = 0;

DetectorConstruction::DetectorConstruction() : G4VUserDetectorConstruction() {}
DetectorConstruction::~DetectorConstruction() {}

G4VPhysicalVolume* DetectorConstruction::Construct()
{
    // Materials
    G4NistManager* nistManager = G4NistManager::Instance();
    G4Material* air = nistManager->FindOrBuildMaterial("G4_AIR");
    G4Material* tungsten = nistManager->FindOrBuildMaterial("G4_W");
    G4Material* pyrexGlass = nistManager->FindOrBuildMaterial("G4_Pyrex_Glass");
    G4Material* scintillator = nistManager->FindOrBuildMaterial("G4_PLASTIC_SC_VINYLTOLUENE");
    G4Material* liquidArgon = nistManager->FindOrBuildMaterial("G4_lAr");

    // World dimensions
    G4double worldSize = 2000.0 * cm;
    G4GeometryManager::GetInstance()->SetWorldMaximumExtent(worldSize);
    G4Box* worldS = new G4Box("World", worldSize/2, worldSize/2, worldSize/2);
    G4LogicalVolume* worldLV = new G4LogicalVolume(worldS, air, "World");
    G4VPhysicalVolume* worldPV = new G4PVPlacement(0, G4ThreeVector(), worldLV, "World", 0, false, 0, true);

    // Visual attributes
    G4VisAttributes* argonVis = new G4VisAttributes(G4Colour(0.0, 1.0, 0.0)); // Green
    G4VisAttributes* pyrexVis = new G4VisAttributes(G4Colour(1.0, 1.0, 1.0)); // White
    G4VisAttributes* scintillatorVis = new G4VisAttributes(G4Colour(1.0, 1.0, 0.0)); // Yellow
    G4VisAttributes* tungstenVis = new G4VisAttributes(G4Colour(1.0, 0.0, 0.0, 0.1)); // 0.1 opacity

    // Layer properties
    G4double layerThickness = 6 * cm;
    G4double gap = 60 * cm;
    
    // Construct the three groups of semi-spherical layers
    for (int i = 0; i < 3; ++i) {
        G4double innerRadius = i * gap;
        G4double outerRadius;
        
        // Liquid Argon Layer
        outerRadius = innerRadius + layerThickness;
        G4Sphere* argonS = new G4Sphere("LiquidArgon", innerRadius, outerRadius, 0.0 * deg, 360.0 * deg, 0.0 * deg, 90.0 * deg);
        G4LogicalVolume* argonLV = new G4LogicalVolume(argonS, liquidArgon, "LiquidArgon_" + std::to_string(i+1));
        argonLV->SetVisAttributes(argonVis);
        new G4PVPlacement(0, G4ThreeVector(), argonLV, "LiquidArgon", worldLV, false, i, true);
        
        // Pyrex Glass Layer
        innerRadius = outerRadius;
        outerRadius += layerThickness;
        G4Sphere* pyrexS = new G4Sphere("PyrexGlass", innerRadius, outerRadius, 0.0 * deg, 360.0 * deg, 0.0 * deg, 90.0 * deg);
        G4LogicalVolume* pyrexLV = new G4LogicalVolume(pyrexS, pyrexGlass, "PyrexGlass_" + std::to_string(i+1));
        pyrexLV->SetVisAttributes(pyrexVis);
        new G4PVPlacement(0, G4ThreeVector(), pyrexLV, "PyrexGlass", worldLV, false, i, true);
        
        // Scintillator Layer
        innerRadius = outerRadius;
        outerRadius += layerThickness;
        G4Sphere* scintillatorS = new G4Sphere("Scintillator", innerRadius, outerRadius, 0.0 * deg, 360.0 * deg, 0.0 * deg, 90.0 * deg);
        G4LogicalVolume* scintillatorLV = new G4LogicalVolume(scintillatorS, scintillator, "Scintillator_" + std::to_string(i+1));
        scintillatorLV->SetVisAttributes(scintillatorVis);
        new G4PVPlacement(0, G4ThreeVector(), scintillatorLV, "Scintillator", worldLV, false, i, true);
    }

    // Final enclosing layer (Tungsten)
    G4Sphere* tungstenS = new G4Sphere("Tungsten", worldSize/2 - 0.001 * cm, worldSize/2, 0.0 * deg, 360.0 * deg, 0.0 * deg, 180.0 * deg);
    G4LogicalVolume* tungstenLV = new G4LogicalVolume(tungstenS, tungsten, "Tungsten");
    tungstenLV->SetVisAttributes(tungstenVis);
    new G4PVPlacement(0, G4ThreeVector(), tungstenLV, "Tungsten", worldLV, false, 0, true);
    
    return worldPV;
}

void DetectorConstruction::ConstructSDandField()
{
    G4ThreeVector fieldValue = G4ThreeVector();
    m_magneticFieldMessenger = new G4GlobalMagFieldMessenger(fieldValue);
    G4AutoDelete::Register(m_magneticFieldMessenger);

    for (int i = 0; i < 3; ++i) {
        // Create a tracker for each layer in the group
        auto trackerArgon = new EnergyMomentumFinder("Tracker_LiquidArgon_" + std::to_string(i + 1), i + 1);
        auto trackerPyrex = new EnergyMomentumFinder("Tracker_PyrexGlass_" + std::to_string(i + 1), i + 4);  // Adjusted ID range for separation
        auto trackerScintillator = new EnergyMomentumFinder("Tracker_Scintillator_" + std::to_string(i + 1), i + 7);

        // Register each tracker in the G4SDManager
        G4SDManager::GetSDMpointer()->AddNewDetector(trackerArgon);
        G4SDManager::GetSDMpointer()->AddNewDetector(trackerPyrex);
        G4SDManager::GetSDMpointer()->AddNewDetector(trackerScintillator);

        // Assign each tracker to its corresponding logical volume
        this->SetSensitiveDetector("LiquidArgon_" + std::to_string(i + 1), trackerArgon);
        this->SetSensitiveDetector("PyrexGlass_" + std::to_string(i + 1), trackerPyrex);
        this->SetSensitiveDetector("Scintillator_" + std::to_string(i + 1), trackerScintillator);
    }

    // Final enclosing layer as a sensitive detector
    auto trackerTungsten = new EnergyMomentumFinder("Tracker_Tungsten", 10);
    G4SDManager::GetSDMpointer()->AddNewDetector(trackerTungsten);
    this->SetSensitiveDetector("Tungsten", trackerTungsten);
}


