#pragma once

#include <Arduino.h>

#include <ArduinoSTL.h>
using std::vector;

#include "Strategems.h"

#include "Strategem.h"

#include "NullStrategem.h"
// Backpacks
#include "BallisticShield.h"
#include "JumpPack.h"
#include "LaserGuardDog.h"
#include "RifleGuardDog.h"
#include "ShieldPack.h"
#include "SupplyPack.h"

// Support Weapons
#include "AirburstRocketLauncher.h"
#include "AntiMaterielRifle.h"
#include "ArcThrower.h"
#include "Autocannon.h"
#include "ExpendableAntiTank.h"
#include "Flamethrower.h"
#include "GrenadeLauncher.h"
#include "HeavyMachineGun.h"
#include "LaserCannon.h"
#include "MachineGun.h"
#include "QuasarCannon.h"
#include "Railgun.h"
#include "RecoillessRifle.h"
#include "SPEAR.h"
#include "Stalwart.h"

// Support
#include "Reinforce.h"
#include "Resupply.h"
#include "SOSBeacon.h"

// Defensive
#include "AutocannonSentry.h"
#include "GatlingSentry.h"
#include "HMGEmplacement.h"
#include "IncendiaryMinefield.h"
#include "MachineGunSentry.h"
#include "Minefield.h"
#include "MortarSentry.h"
#include "RocketSentry.h"
#include "ShieldGenerator.h"
#include "TeslaTower.h"

// Orbitals
#include "AirburstStrike.h"
#include "Barrage120MM.h"
#include "Barrage380MM.h"
#include "EMSStrike.h"
#include "GasStrike.h"
#include "GatlingBarrage.h"
#include "OrbitalLaser.h"
#include "OrbitalRailcannon.h"
#include "OrbitalSmokeStrike.h"
#include "PrecisionStrike.h"
#include "WalkingBarrage.h"

// Eagle
#include "Airstrike.h"
#include "Bomb500kg.h"
#include "ClusterBomb.h"
#include "EagleRearm.h"
#include "EagleSmokeStrike.h"
#include "NapalmAirstrike.h"
#include "RocketPods110MM.h"
#include "StrafingRun.h"


Strategems::Strategems() {
  addStrategem(new NullStrategem());

  // Backpacks
  addStrategem(new BallisticShield());
  addStrategem(new JumpPack());
  addStrategem(new LaserGuardDog());
  addStrategem(new RifleGuardDog());
  addStrategem(new ShieldPack());
  addStrategem(new SupplyPack());

  // Support Weapons
  addStrategem(new AirburstRocketLauncher());
  addStrategem(new AntiMaterielRifle());
  addStrategem(new ArcThrower());
  addStrategem(new Autocannon());
  addStrategem(new ExpendableAntiTank());
  addStrategem(new Flamethrower());
  addStrategem(new GrenadeLauncher());
  addStrategem(new HeavyMachineGun());
  addStrategem(new LaserCannon());
  addStrategem(new MachineGun());
  addStrategem(new QuasarCannon());
  addStrategem(new Railgun());
  addStrategem(new RecoillessRifle());
  addStrategem(new SPEAR());
  addStrategem(new Stalwart());

  // Support
  addStrategem(new Reinforce());
  addStrategem(new Resupply());
  addStrategem(new SOSBeacon());

  // Defensive
  addStrategem(new AutocannonSentry());
  addStrategem(new GatlingSentry());
  addStrategem(new HMGEmplacement());
  addStrategem(new IncendiaryMinefield());
  addStrategem(new MachineGunSentry());
  addStrategem(new Minefield());
  addStrategem(new MortarSentry());
  addStrategem(new RocketSentry());
  addStrategem(new ShieldGenerator());
  addStrategem(new TeslaTower());

  // Orbitals
  addStrategem(new AirburstStrike());
  addStrategem(new Barrage120MM());
  addStrategem(new Barrage380MM());
  addStrategem(new EMSStrike());
  addStrategem(new GasStrike());
  addStrategem(new GatlingBarrage());
  addStrategem(new OrbitalLaser());
  addStrategem(new OrbitalRailcannon());
  addStrategem(new OrbitalSmokeStrike());
  addStrategem(new PrecisionStrike());
  addStrategem(new WalkingBarrage());

  // Eagle
  addStrategem(new Airstrike());
  addStrategem(new Bomb500kg());
  addStrategem(new ClusterBomb());
  addStrategem(new EagleRearm());
  addStrategem(new EagleSmokeStrike());
  addStrategem(new NapalmAirstrike());
  addStrategem(new RocketPods110MM());
  addStrategem(new StrafingRun());
}

Strategems::~Strategems() {
  for (const auto& [id, strategem]: strategems) {
    delete strategem;
  }
}

void Strategems::addStrategem(const Strategem* strategem) {
  strategems[strategem->strategemID()] = strategem;
}

const String Strategems::makeKeypadKeymap(const vector<StrategemType>& strategemTypes) const {
  String keymap = F("");
  for (const StrategemType& s: strategemTypes) {
    keymap += static_cast<const char>(s);
  }
  return keymap;
}

const Strategem* Strategems::operator[] (const StrategemType strategemID) const {
  return strategems.at(strategemID);
}

const Strategem* Strategems::operator[] (const String& strategemName) const {
  for (const auto& [id, strategem]: strategems) {
    if (strategem->strategemName() == strategemName) {
      return strategem;
    }
  }
  return nullptr;
}
