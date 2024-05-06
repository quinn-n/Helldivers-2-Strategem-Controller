#pragma once

#include <Arduino.h>

#include "GatlingSentry.h"

const String GatlingSentry::strategemName() const {
  return F("Gatling Sentry");
}

const String GatlingSentry::keyCode() const {
  return F("swda");
}

const StrategemType GatlingSentry::strategemID() const {
  return StrategemType::GatlingSentry;
}
