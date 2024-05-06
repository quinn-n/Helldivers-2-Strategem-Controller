#pragma once

#include <Arduino.h>

#include "HMGEmplacement.h"

const String HMGEmplacement::strategemName() const {
  return F("HMG Emplacement");
}

const String HMGEmplacement::keyCode() const {
  return F("swadda");
}

const StrategemType HMGEmplacement::strategemID() const {
  return StrategemType::HMGEmplacement;
}
