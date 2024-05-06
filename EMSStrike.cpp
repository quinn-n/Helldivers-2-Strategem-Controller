#pragma once

#include <Arduino.h>

#include "EMSStrike.h"

const String EMSStrike::strategemName() const {
  return F("EMS Strike");
}

const String EMSStrike::keyCode() const {
  return F("ddas");
}

const StrategemType EMSStrike::strategemID() const {
  return StrategemType::EMSStrike;
}
