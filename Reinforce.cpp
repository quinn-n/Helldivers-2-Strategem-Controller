#pragma once

#include <Arduino.h>

#include "Reinforce.h"

const String Reinforce::strategemName() const {
  return F("Reinforce");
}

const String Reinforce::keyCode() const {
  return F("wsdaw");
}

const StrategemType Reinforce::strategemID() const {
  return StrategemType::Reinforce;
}
