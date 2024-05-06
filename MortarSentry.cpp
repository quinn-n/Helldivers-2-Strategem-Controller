#pragma once

#include <Arduino.h>

#include "MortarSentry.h"

const String MortarSentry::strategemName() const {
  return F("Mortar Sentry");
}

const String MortarSentry::keyCode() const {
  return F("swdds");
}

const StrategemType MortarSentry::strategemID() const {
  return StrategemType::MortarSentry;
}
