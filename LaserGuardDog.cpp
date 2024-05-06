#pragma once

#include <Arduino.h>

#include "LaserGuardDog.h"

const String LaserGuardDog::strategemName() const {
  return F("Laser Guard Dog");
}

const String LaserGuardDog::keyCode() const {
  return F("swawdd");
}

const StrategemType LaserGuardDog::strategemID() const {
  return StrategemType::LaserGuardDog;
}
