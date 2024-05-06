#pragma once

#include <Arduino.h>

#include "Bomb500kg.h"

const String Bomb500kg::strategemName() const {
  return F("500kg Bomb");
}

const String Bomb500kg::keyCode() const {
  return F("wdsss");
}

const StrategemType Bomb500kg::strategemID() const {
  return StrategemType::Bomb500kg;
}
