#pragma once

#include <Arduino.h>

#include "AirburstStrike.h"

const String AirburstStrike::strategemName() const {
  return F("Airburst Strike");
}

const String AirburstStrike::keyCode() const {
  return F("ddd");
}

const StrategemType AirburstStrike::strategemID() const {
  return StrategemType::AirburstStrike;
}
