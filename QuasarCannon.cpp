#pragma once

#include <Arduino.h>

#include "QuasarCannon.h"

const String QuasarCannon::strategemName() const {
  return F("Quasar Cannon");
}

const String QuasarCannon::keyCode() const {
  return F("sswad");
}

const StrategemType QuasarCannon::strategemID() const {
  return StrategemType::QuasarCannon;
}
