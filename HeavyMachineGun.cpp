#pragma once

#include <Arduino.h>

#include "HeavyMachineGun.h"

const String HeavyMachineGun::strategemName() const {
  return F("Heavy Machine Gun");
}

const String HeavyMachineGun::keyCode() const {
  return F("sawss");
}

const StrategemType HeavyMachineGun::strategemID() const {
  return StrategemType::HeavyMachineGun;
}
