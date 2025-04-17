#ifndef ENERGYMOMENTUMFINDER_H
#define ENERGYMOMENTUMFINDER_H

#include "G4VSensitiveDetector.hh"
#include "G4ThreeVector.hh"

class EnergyMomentumFinder : public G4VSensitiveDetector
{
public:
    EnergyMomentumFinder(const G4String& name, const G4int id);
    virtual ~EnergyMomentumFinder();

    virtual void Initialize(G4HCofThisEvent*);
    virtual G4bool ProcessHits(G4Step* step, G4TouchableHistory*);
    virtual void EndOfEvent(G4HCofThisEvent*);

private:
    G4int m_ID;
};

#endif // ENERGYMOMENTUMFINDER_H

