#pragma once

#include <Arduino.h>

#include "ShieldPack.h"

const String ShieldPack::strategemName() const {
  return F("Shield Generator Pack");
}

const String ShieldPack::keyCode() const {
  return F("swadad");
}

const StrategemType ShieldPack::strategemID() const {
  return StrategemType::ShieldPack;
}
