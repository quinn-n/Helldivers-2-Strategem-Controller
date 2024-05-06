#pragma once

#include <Arduino.h>

#include "AntiMaterielRifle.h"

const String AntiMaterielRifle::strategemName() const {
  return F("Anti-Materiel Rifle");
}

const String AntiMaterielRifle::keyCode() const {
  return F("saddws");
}

const StrategemType AntiMaterielRifle::strategemID() const {
  return StrategemType::AntiMaterielRifle;
}
