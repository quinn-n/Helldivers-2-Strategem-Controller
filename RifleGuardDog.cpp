#pragma once

#include <Arduino.h>

#include "RifleGuardDog.h"

const String RifleGuardDog::strategemName() const {
  return F("Rifle Guard Dog");
}

const String RifleGuardDog::keyCode() const {
  return F("swawds");
}

const StrategemType RifleGuardDog::strategemID() const {
  return StrategemType::RifleGuardDog;
}
