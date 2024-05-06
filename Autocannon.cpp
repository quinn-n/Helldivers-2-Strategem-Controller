#pragma once

#include <Arduino.h>

#include "Autocannon.h"

const String Autocannon::strategemName() const {
  return F("Autocannon");
}

const String Autocannon::keyCode() const {
  return F("saswwd");
}

const StrategemType Autocannon::strategemID() const {
  return StrategemType::Autocannon;
}
