#pragma once

#include <Arduino.h>

#include "EagleRearm.h"

const String EagleRearm::strategemName() const {
  return F("Eagle Rearm");
}

const String EagleRearm::keyCode() const {
  return F("wwawd");
}

const StrategemType EagleRearm::strategemID() const {
  return StrategemType::EagleRearm;
}
