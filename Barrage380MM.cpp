#pragma once

#include <Arduino.h>

#include "Barrage380MM.h"

const String Barrage380MM::strategemName() const {
  return F("380MM Barrage");
}

const String Barrage380MM::keyCode() const {
  return F("dswwass");
}

const StrategemType Barrage380MM::strategemID() const {
  return StrategemType::Barrage380MM;
}
