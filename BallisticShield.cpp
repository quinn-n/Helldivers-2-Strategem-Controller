#pragma once

#include <Arduino.h>

#include "BallisticShield.h"

const String BallisticShield::strategemName() const {
  return F("Ballistic Shield");
}

const String BallisticShield::keyCode() const {
  return F("sasswa");
}

const StrategemType BallisticShield::strategemID() const {
  return StrategemType::BallisticShield;
}
