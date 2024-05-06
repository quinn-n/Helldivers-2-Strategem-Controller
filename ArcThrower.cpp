#pragma once

#include <Arduino.h>

#include "ArcThrower.h"

const String ArcThrower::strategemName() const {
  return F("Arc Thrower");
}

const String ArcThrower::keyCode() const {
  return F("sdswaa");
}

const StrategemType ArcThrower::strategemID() const {
  return StrategemType::ArcThrower;
}