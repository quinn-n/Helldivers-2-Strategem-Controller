#pragma once

#include <Arduino.h>

#include "StrafingRun.h"

const String StrafingRun::strategemName() const {
  return F("Strafing Run");
}

const String StrafingRun::keyCode() const {
  return F("wdsd");
}

const StrategemType StrafingRun::strategemID() const {
  return StrategemType::StrafingRun;
}
