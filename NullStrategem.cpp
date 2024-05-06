#pragma once

#include "NullStrategem.h"

const String NullStrategem::strategemName() const {
  return F("Null");
}

const String NullStrategem::keyCode() const {
  return F("");
}

const StrategemType NullStrategem::strategemID() const {
  return StrategemType::NullStrategem;
}
