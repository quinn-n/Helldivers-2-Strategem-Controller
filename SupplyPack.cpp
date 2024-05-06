#pragma once

#include <Arduino.h>

#include "SupplyPack.h"

const String SupplyPack::strategemName() const {
  return F("Supply Pack");
}

const String SupplyPack::keyCode() const {
  return F("saswws");
}

const StrategemType SupplyPack::strategemID() const {
  return StrategemType::SupplyPack;
}
