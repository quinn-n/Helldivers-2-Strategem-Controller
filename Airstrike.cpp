#pragma once

#include <Arduino.h>

#include "Airstrike.h"

const String Airstrike::strategemName() const {
  return F("Airstrike");
}

const String Airstrike::keyCode() const {
  return F("wdsd");
}

const StrategemType Airstrike::strategemID() const {
  return StrategemType::Airstrike;
}
