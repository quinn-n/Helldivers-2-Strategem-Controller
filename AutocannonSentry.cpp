#pragma once

#include <Arduino.h>

#include "AutocannonSentry.h"

const String AutocannonSentry::strategemName() const {
  return F("Autocannon Sentry");
}

const String AutocannonSentry::keyCode() const {
  return F("swdwaw");
}

const StrategemType AutocannonSentry::strategemID() const {
  return StrategemType::AutocannonSentry;
}
