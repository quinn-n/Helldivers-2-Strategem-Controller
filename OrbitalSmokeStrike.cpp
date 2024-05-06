#pragma once

#include <Arduino.h>

#include "OrbitalSmokeStrike.h"

const String OrbitalSmokeStrike::strategemName() const {
  return F("Orbital Smoke Strike");
}

const String OrbitalSmokeStrike::keyCode() const {
  return F("ddsw");
}

const StrategemType OrbitalSmokeStrike::strategemID() const {
  return StrategemType::OrbitalSmokeStrike;
}
