#pragma once

#include <Arduino.h>

#include "GatlingBarrage.h"

const String GatlingBarrage::strategemName() const {
  return F("Gatling Barrage");
}

const String GatlingBarrage::keyCode() const {
  return F("dsaww");
}

const StrategemType GatlingBarrage::strategemID() const {
  return StrategemType::GatlingBarrage;
}
