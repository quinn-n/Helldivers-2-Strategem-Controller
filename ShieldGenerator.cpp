#pragma once

#include <Arduino.h>

#include "ShieldGenerator.h"

const String ShieldGenerator::strategemName() const {
  return F("Shield Generator");
}

const String ShieldGenerator::keyCode() const {
  return F("ssadad");
}

const StrategemType ShieldGenerator::strategemID() const {
  return StrategemType::ShieldGenerator;
}
