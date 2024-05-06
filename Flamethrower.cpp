#pragma once

#include <Arduino.h>

#include "Flamethrower.h"

const String Flamethrower::strategemName() const {
  return F("Flamethrower");
}

const String Flamethrower::keyCode() const {
  return F("sawsw");
}

const StrategemType Flamethrower::strategemID() const {
  return StrategemType::Flamethrower;
}
