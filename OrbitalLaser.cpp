#pragma once

#include <Arduino.h>

#include "OrbitalLaser.h"

const String OrbitalLaser::strategemName() const {
  return F("Orbital Laser");
}

const String OrbitalLaser::keyCode() const {
  return F("dswds");
}

const StrategemType OrbitalLaser::strategemID() const {
  return StrategemType::OrbitalLaser;
}
