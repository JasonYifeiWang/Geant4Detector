#include "GeneratorAction.h"
#include "G4ParticleTable.hh"
#include "G4SystemOfUnits.hh"
#include "G4CsvAnalysisManager.hh"
#include "G4Event.hh" 
#include "G4RandomTools.hh"

using G4AnalysisManager = G4CsvAnalysisManager;

GeneratorAction::GeneratorAction() : G4VUserPrimaryGeneratorAction()
{
  m_particleGun = new G4ParticleGun( 1 );

  // Default particle
  m_particleGun->SetParticlePosition( G4ThreeVector( 0.0, 0.0, -400.0*cm ) ); 
  m_particleGun->SetParticleMomentumDirection( G4ThreeVector( 0, 0, 1 ) ); // direction
}

GeneratorAction::~GeneratorAction()
{
  delete m_particleGun;
}

// This function is called at the beginning of each event
void GeneratorAction::GeneratePrimaries( G4Event* anEvent )
{
  // Randomly choose between "e-" (50%) and "gamma" (50%)
  G4String particleName = (G4UniformRand() < 0.5) ? "e-" : "gamma";
  
  G4ParticleDefinition* particleDefinition = G4ParticleTable::GetParticleTable()->FindParticle(particleName);
  
  m_particleGun->SetParticleDefinition(particleDefinition);
  
  // Randomize energy between 200 MeV and 20 GeV
  G4double minEnergy = 200.0 * MeV;
  G4double maxEnergy = 20.0 * GeV;
  G4double randomEnergy = minEnergy + G4UniformRand() * (maxEnergy - minEnergy);
  
  // Set the random energy
  m_particleGun->SetParticleEnergy(randomEnergy);
  
  // Fire a particle
  m_particleGun->GeneratePrimaryVertex( anEvent );

  // Store truth information - first column
  auto analysisManager = G4AnalysisManager::Instance();

  // Get particle energy, position, and momentum
  G4double particleEnergy = m_particleGun->GetParticleEnergy();
  G4ThreeVector momentum = m_particleGun->GetParticleMomentumDirection() * particleEnergy; // Energy * direction = momentum
  G4ThreeVector position = m_particleGun->GetParticlePosition();
  G4int pdgCode = m_particleGun->GetParticleDefinition()->GetPDGEncoding();

  // Fill the ntuple with truth information
  analysisManager->FillNtupleIColumn( 0, 0, anEvent->GetEventID() ); // Event number
  analysisManager->FillNtupleDColumn( 0, 1, momentum.x() );  // Momentum X
  analysisManager->FillNtupleDColumn( 0, 2, momentum.y() );  // Momentum Y
  analysisManager->FillNtupleDColumn( 0, 3, momentum.z() );  // Momentum Z
  analysisManager->FillNtupleDColumn( 0, 4, particleEnergy ); // Energy
  analysisManager->FillNtupleDColumn( 0, 5, pdgCode ); // Type

  analysisManager->AddNtupleRow( 0 ); // Add a new row to the ntuple
}
