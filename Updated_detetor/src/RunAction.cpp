#include "RunAction.h"
#include "G4CsvAnalysisManager.hh"

using G4AnalysisManager = G4CsvAnalysisManager;

RunAction::RunAction() : G4UserRunAction()
{
    auto analysisManager = G4AnalysisManager::Instance();

    // Create an ntuple for truth information
    analysisManager->CreateNtuple("Truth", "Truth information");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("MomX");
    analysisManager->CreateNtupleDColumn("MomY");
    analysisManager->CreateNtupleDColumn("MomZ");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("Particle");
    analysisManager->FinishNtuple();

    for (int i = 1; i <= 3; ++i) {
      // Liquid Argon layer
      analysisManager->CreateNtuple("Tracker_LiquidArgon_" + std::to_string(i), "Liquid Argon Layer " + std::to_string(i));
      analysisManager->CreateNtupleIColumn("EventNumber");
      analysisManager->CreateNtupleDColumn("PosX");
      analysisManager->CreateNtupleDColumn("PosY");
      analysisManager->CreateNtupleDColumn("PosZ");
      analysisManager->CreateNtupleDColumn("MomX");
      analysisManager->CreateNtupleDColumn("MomY");
      analysisManager->CreateNtupleDColumn("MomZ");
      analysisManager->CreateNtupleDColumn("Energy");
      analysisManager->FinishNtuple();
  
      // Pyrex Glass layer
      analysisManager->CreateNtuple("Tracker_PyrexGlass_" + std::to_string(i), "Pyrex Glass Layer " + std::to_string(i));
      analysisManager->CreateNtupleIColumn("EventNumber");
      analysisManager->CreateNtupleDColumn("PosX");
      analysisManager->CreateNtupleDColumn("PosY");
      analysisManager->CreateNtupleDColumn("PosZ");
      analysisManager->CreateNtupleDColumn("MomX");
      analysisManager->CreateNtupleDColumn("MomY");
      analysisManager->CreateNtupleDColumn("MomZ");
      analysisManager->CreateNtupleDColumn("Energy");
      analysisManager->FinishNtuple();
  
      // Scintillator layer
      analysisManager->CreateNtuple("Tracker_Scintillator_" + std::to_string(i), "Scintillator Layer " + std::to_string(i));
      analysisManager->CreateNtupleIColumn("EventNumber");
      analysisManager->CreateNtupleDColumn("PosX");
      analysisManager->CreateNtupleDColumn("PosY");
      analysisManager->CreateNtupleDColumn("PosZ");
      analysisManager->CreateNtupleDColumn("MomX");
      analysisManager->CreateNtupleDColumn("MomY");
      analysisManager->CreateNtupleDColumn("MomZ");
      analysisManager->CreateNtupleDColumn("Energy");
      analysisManager->FinishNtuple();
  }
  
    // Final enclosing layer (Tungsten)
    analysisManager->CreateNtuple("Tracker_Tungsten", "Tungsten Layer");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("PosX");
    analysisManager->CreateNtupleDColumn("PosY");
    analysisManager->CreateNtupleDColumn("PosZ");
    analysisManager->CreateNtupleDColumn("MomX");
    analysisManager->CreateNtupleDColumn("MomY");
    analysisManager->CreateNtupleDColumn("MomZ");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->FinishNtuple();
}

RunAction::~RunAction()
{
    delete G4AnalysisManager::Instance();
}

void RunAction::BeginOfRunAction(const G4Run*)
{
    auto analysisManager = G4AnalysisManager::Instance();
    analysisManager->OpenFile("output.csv");
}

void RunAction::EndOfRunAction(const G4Run*)
{
    auto analysisManager = G4AnalysisManager::Instance();
    analysisManager->Write();
    analysisManager->CloseFile();
}
