#pragma once

#include <Arduino.h>

#include "SPEAR.h"

const String SPEAR::strategemName() const {
  return F("SPEAR");
}

const String SPEAR::keyCode() const {
  return F("sswss");
}

const StrategemType SPEAR::strategemID() const {
  return StrategemType::SPEAR;
}
