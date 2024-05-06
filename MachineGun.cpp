#pragma once

#include <Arduino.h>

#include "MachineGun.h"

const String MachineGun::strategemName() const {
  return F("Machine Gun");
}

const String MachineGun::keyCode() const {
  return F("saswd");
}

const StrategemType MachineGun::strategemID() const {
  return StrategemType::MachineGun;
}
