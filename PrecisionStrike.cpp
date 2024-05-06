#pragma once

#include <Arduino.h>

#include "PrecisionStrike.h"

const String PrecisionStrike::strategemName() const {
  return F("Precision Strike");
}

const String PrecisionStrike::keyCode() const {
  return F("ddw");
}

const StrategemType PrecisionStrike::strategemID() const {
  return StrategemType::PrecisionStrike;
}
