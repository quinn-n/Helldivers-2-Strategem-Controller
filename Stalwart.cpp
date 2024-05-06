#pragma once

#include <Arduino.h>

#include "Stalwart.h"

const String Stalwart::strategemName() const {
  return F("Stalwart");
}

const String Stalwart::keyCode() const {
  return F("saswwa");
}

const StrategemType Stalwart::strategemID() const {
  return StrategemType::Stalwart;
}
