#include "EnergyMomentumFinder.h"
#include "G4RunManager.hh"
#include "G4CsvAnalysisManager.hh"

using G4AnalysisManager = G4CsvAnalysisManager;

EnergyMomentumFinder::EnergyMomentumFinder(const G4String& name, const G4int id)
  : G4VSensitiveDetector(name), m_ID(id) {}

EnergyMomentumFinder::~EnergyMomentumFinder() {}

void EnergyMomentumFinder::Initialize(G4HCofThisEvent*) {}

#include <iostream>

G4bool EnergyMomentumFinder::ProcessHits(G4Step* step, G4TouchableHistory*)
{
    // Tracking detectors only sense charged particles
    if (step->GetTrack()->GetParticleDefinition()->GetPDGCharge() != 0.0)
    {
        // Get the hit position and momentum
        G4ThreeVector hitPosition = step->GetTrack()->GetPosition();
        G4ThreeVector hitMomentum = step->GetTrack()->GetMomentum();

        // Get the analysis manager
        auto analysisManager = G4AnalysisManager::Instance();

        // Energy of the particle
        G4double energy = step->GetTrack()->GetTotalEnergy();
        analysisManager->FillNtupleDColumn( m_ID, 7, energy ); // Column 7 - Energy of hit

        // Fill ntuple with event ID and hit data
        analysisManager->FillNtupleIColumn(m_ID, 0, G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID()); // Event number
        analysisManager->FillNtupleDColumn(m_ID, 1, hitPosition.x());
        analysisManager->FillNtupleDColumn(m_ID, 2, hitPosition.y());
        analysisManager->FillNtupleDColumn(m_ID, 3, hitPosition.z());
        analysisManager->FillNtupleDColumn(m_ID, 4, hitMomentum.x());
        analysisManager->FillNtupleDColumn(m_ID, 5, hitMomentum.y());
        analysisManager->FillNtupleDColumn(m_ID, 6, hitMomentum.z());
        analysisManager->FillNtupleDColumn(m_ID, 7, energy);

        analysisManager->AddNtupleRow(m_ID);
    }

    return true;
}



void EnergyMomentumFinder::EndOfEvent(G4HCofThisEvent*) {}
