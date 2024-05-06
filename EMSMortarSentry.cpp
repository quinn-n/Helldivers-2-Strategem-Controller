#pragma once

#include <Arduino.h>

#include "EMSMortarSentry.h"

const String EMSMortarSentry::strategemName() const {
  return F("EMS Mortar Sentry");
}

const String EMSMortarSentry::keyCode() const {
  return F("swdsd");
}

const StrategemType EMSMortarSentry::strategemID() const {
  return StrategemType::EMSMortarSentry;
}
