#pragma once

#include <Arduino.h>

#include "TeslaTower.h"

const String TeslaTower::strategemName() const {
  return F("Tesla Tower");
}

const String TeslaTower::keyCode() const {
  return F("swdwad");
}

const StrategemType TeslaTower::strategemID() const {
  return StrategemType::TeslaTower;
}
