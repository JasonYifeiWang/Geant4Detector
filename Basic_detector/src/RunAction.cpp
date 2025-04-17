#include "RunAction.h"
#include "G4CsvAnalysisManager.hh"

using G4AnalysisManager = G4CsvAnalysisManager;

RunAction::RunAction() : G4UserRunAction()
{
    auto analysisManager = G4AnalysisManager::Instance();

    // **Set default file type and file name before opening**
    analysisManager->SetDefaultFileType("csv");
    analysisManager->SetNtupleFileName("output_data");  // 🔥 Ensure this is set

    // **Create the Truth Data Ntuple (ID: 0)**
    analysisManager->CreateNtuple("Truth", "Primary Particle Information");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->CreateNtupleIColumn("Particle type");
    analysisManager->FinishNtuple();

    // **Create the Tracker1 Ntuple (ID: 1)**
    analysisManager->CreateNtuple("Tracker1", "Tracker 1 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker2 Ntuple (ID: 2)**
    analysisManager->CreateNtuple("Tracker2", "Tracker 2 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker3 Ntuple (ID: 3)**
    analysisManager->CreateNtuple("Tracker3", "Tracker 3 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker4 Ntuple (ID: 4)**
    analysisManager->CreateNtuple("Tracker4", "Tracker 4 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker5 Ntuple (ID: 5)**
    analysisManager->CreateNtuple("Tracker5", "Tracker 5 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker6 Ntuple (ID: 6)**
    analysisManager->CreateNtuple("Tracker6", "Tracker 6 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker7 Ntuple (ID: 7)**
    analysisManager->CreateNtuple("Tracker7", "Tracker 7 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();

    // **Create the Tracker8 Ntuple (ID: 8)**
    analysisManager->CreateNtuple("Tracker8", "Tracker 8 hits");
    analysisManager->CreateNtupleIColumn("EventNumber");
    analysisManager->CreateNtupleDColumn("Energy");
    analysisManager->CreateNtupleDColumn("X");
    analysisManager->CreateNtupleDColumn("Y");
    analysisManager->CreateNtupleDColumn("Z");
    analysisManager->CreateNtupleDColumn("Px");
    analysisManager->CreateNtupleDColumn("Py");
    analysisManager->CreateNtupleDColumn("Pz");
    analysisManager->FinishNtuple();


}

RunAction::~RunAction()
{
    delete G4AnalysisManager::Instance();
}

void RunAction::BeginOfRunAction( const G4Run* )
{
  // Get analysis manager
  auto analysisManager = G4AnalysisManager::Instance();

  // Open an output file
  analysisManager->OpenFile( "output.csv" );
}

void RunAction::EndOfRunAction( const G4Run* )
{
  // Get analysis manager
  auto analysisManager = G4AnalysisManager::Instance();

  // Save output data
  analysisManager->Write();
  analysisManager->CloseFile();
}