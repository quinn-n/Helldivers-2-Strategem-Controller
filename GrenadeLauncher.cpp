#pragma once

#include <Arduino.h>

#include "GrenadeLauncher.h"

const String GrenadeLauncher::strategemName() const {
  return F("GrenadeLauncher");
}

const String GrenadeLauncher::keyCode() const {
  return F("sawas");
}

const StrategemType GrenadeLauncher::strategemID() const {
  return StrategemType::GrenadeLauncher;
}
