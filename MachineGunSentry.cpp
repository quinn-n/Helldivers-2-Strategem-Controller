#pragma once

#include <Arduino.h>

#include "MachineGunSentry.h"

const String MachineGunSentry::strategemName() const {
  return F("Machine Gun Sentry");
}

const String MachineGunSentry::keyCode() const {
  return F("swaswd");
}

const StrategemType MachineGunSentry::strategemID() const {
  return StrategemType::MachineGunSentry;
}
