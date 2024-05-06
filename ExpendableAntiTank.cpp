#pragma once

#include <Arduino.h>

#include "ExpendableAntiTank.h"

const String ExpendableAntiTank::strategemName() const {
  return F("Expendable Anti-Tank");
}

const String ExpendableAntiTank::keyCode() const {
  return F("ssawd");
}

const StrategemType ExpendableAntiTank::strategemID() const {
  return StrategemType::ExpendableAntiTank;
}
