#pragma once

#include <Arduino.h>

#include "NapalmAirstrike.h"

const String NapalmAirstrike::strategemName() const {
  return F("Napalm Airstrike");
}

const String NapalmAirstrike::keyCode() const {
  return F("wdsw");
}

const StrategemType NapalmAirstrike::strategemID() const {
  return StrategemType::NapalmAirstrike;
}
