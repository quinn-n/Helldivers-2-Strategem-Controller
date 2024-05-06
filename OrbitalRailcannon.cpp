#pragma once

#include <Arduino.h>

#include "OrbitalRailcannon.h"

const String OrbitalRailcannon::strategemName() const {
  return F("Orbital Railcannon");
}

const String OrbitalRailcannon::keyCode() const {
  return F("dwssd");
}

const StrategemType OrbitalRailcannon::strategemID() const {
  return StrategemType::OrbitalRailcannon;
}
