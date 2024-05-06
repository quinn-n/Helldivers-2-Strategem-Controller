#pragma once

#include <Arduino.h>

#include "RecoillessRifle.h"

const String RecoillessRifle::strategemName() const {
  return F("Recoilless Rifle");
}

const String RecoillessRifle::keyCode() const {
  return F("sadda");
}

const StrategemType RecoillessRifle::strategemID() const {
  return StrategemType::RecoillessRifle;
}
