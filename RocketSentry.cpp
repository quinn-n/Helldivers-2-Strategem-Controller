#pragma once

#include <Arduino.h>

#include "RocketSentry.h"

const String RocketSentry::strategemName() const {
  return F("Rocket Sentry");
}

const String RocketSentry::keyCode() const {
  return F("swdda");
}

const StrategemType RocketSentry::strategemID() const {
  return StrategemType::RocketSentry;
}
