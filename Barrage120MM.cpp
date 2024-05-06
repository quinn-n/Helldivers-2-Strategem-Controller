#pragma once

#include <Arduino.h>

#include "Barrage120MM.h"

const String Barrage120MM::strategemName() const {
  return F("120MM Barrage");
}

const String Barrage120MM::keyCode() const {
  return F("ddsads");
}

const StrategemType Barrage120MM::strategemID() const {
  return StrategemType::Barrage120MM;
}
