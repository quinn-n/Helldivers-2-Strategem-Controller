#pragma once

#include <Arduino.h>

#include "EagleSmokeStrike.h"

const String EagleSmokeStrike::strategemName() const {
  return F("Eagle Smoke Strike");
}

const String EagleSmokeStrike::keyCode() const {
  return F("wdws");
}

const StrategemType EagleSmokeStrike::strategemID() const {
  return StrategemType::EagleSmokeStrike;
}
