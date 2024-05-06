#pragma once

#include <Arduino.h>

#include "GasStrike.h"

const String GasStrike::strategemName() const {
  return F("Gas Strike");
}

const String GasStrike::keyCode() const {
  return F("ddsd");
}

const StrategemType GasStrike::strategemID() const {
  return StrategemType::GasStrike;
}
