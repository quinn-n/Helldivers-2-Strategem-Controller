#pragma once

#include <Arduino.h>

#include "LaserCannon.h"

const String LaserCannon::strategemName() const {
  return F("LaserCannon");
}

const String LaserCannon::keyCode() const {
  return F("saswa");
}

const StrategemType LaserCannon::strategemID() const {
  return StrategemType::LaserCannon;
}
