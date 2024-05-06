#pragma once

#include <Arduino.h>

#include "Minefield.h"

const String Minefield::strategemName() const {
  return F("Minefield");
}

const String Minefield::keyCode() const {
  return F("sawd");
}

const StrategemType Minefield::strategemID() const {
  return StrategemType::Minefield;
}
