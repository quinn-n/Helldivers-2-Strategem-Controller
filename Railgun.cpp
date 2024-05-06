#pragma once

#include <Arduino.h>

#include "Railgun.h"

const String Railgun::strategemName() const {
  return F("Railgun");
}

const String Railgun::keyCode() const {
  return F("sdswad");
}

const StrategemType Railgun::strategemID() const {
  return StrategemType::Railgun;
}
