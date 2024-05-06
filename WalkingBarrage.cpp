#pragma once

#include <Arduino.h>

#include "WalkingBarrage.h"

const String WalkingBarrage::strategemName() const {
  return F("Walking Barrage");
}

const String WalkingBarrage::keyCode() const {
  return F("dsdsds");
}

const StrategemType WalkingBarrage::strategemID() const {
  return StrategemType::WalkingBarrage;
}
