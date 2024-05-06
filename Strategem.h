#pragma once

#include <Arduino.h>

// Time needed for the game to register keypresses
static const int KEYPRESS_TIME = 35;

enum class StrategemType: char {
  NullStrategem = 1,
  // Backpacks
  BallisticShield,
  JumpPack,
  LaserGuardDog,
  RifleGuardDog,
  ShieldPack,
  SupplyPack,

  // Support Weapons
  AirburstRocketLauncher,
  // I know this one is spelled wrong, but this is how it's spelled in the game.
  AntiMaterielRifle,
  ArcThrower,
  Autocannon,
  ExpendableAntiTank,
  Flamethrower,
  GrenadeLauncher,
  HeavyMachineGun,
  LaserCannon,
  MachineGun,
  QuasarCannon,
  Railgun,
  RecoillessRifle,
  SPEAR,
  Stalwart,

  // Support
  Reinforce,
  Resupply,
  SOSBeacon,

  // Defensive
  AutocannonSentry,
  EMSMortarSentry,
  GatlingSentry,
  HMGEmplacement,
  IncendiaryMinefield,
  MachineGunSentry,
  Minefield,
  MortarSentry,
  RocketSentry,
  ShieldGenerator,
  TeslaTower,

  // Orbitals
  AirburstStrike,
  Barrage120MM,
  Barrage380MM,
  EMSStrike,
  GasStrike,
  GatlingBarrage,
  OrbitalLaser,
  OrbitalRailcannon,
  OrbitalSmokeStrike,
  PrecisionStrike,
  WalkingBarrage,

  // Eagle
  Airstrike,
  Bomb500kg,
  ClusterBomb,
  EagleRearm,
  EagleSmokeStrike,
  NapalmAirstrike,
  RocketPods110MM,
  StrafingRun,

  // Used to set the size of the map in Strategems.h.
  // HAS to be the last element in this enum.
  NStrategems,
};

/**
 * @brief An abstract class to represent a strategem
*/
class Strategem {
  public:
  Strategem();

  /**
   * @brief Human readable name
  */
  virtual const String strategemName() const = 0;
  /**
   * @brief the wasd key code to call in the strategem
  */
  virtual const String keyCode() const = 0;

  /**
   * @brief Internal ID to use for the strategem
  */
  virtual const StrategemType strategemID() const = 0;

  /**
   * @brief Call in the strategem
   * @param useArrowKeys Use the arrow keys instead of wasd to call in the strategem
  */
  void callStrategem(bool useArrowKeys) const;

  protected:
  void pressArrowKey(char wasdInput) const;
};
