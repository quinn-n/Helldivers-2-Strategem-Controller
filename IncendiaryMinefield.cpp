#pragma once

#include <Arduino.h>

#include "IncendiaryMinefield.h"

const String IncendiaryMinefield::strategemName() const {
  return F("Incendiary Minefield");
}

const String IncendiaryMinefield::keyCode() const {
  return F("saas");
}

const StrategemType IncendiaryMinefield::strategemID() const {
  return StrategemType::IncendiaryMinefield;
}
