#pragma once

#include "Resupply.h"

const String Resupply::strategemName() const {
  return F("Resupply");
}

const String Resupply::keyCode() const {
  return F("sswd");
}

const StrategemType Resupply::strategemID() const {
  return StrategemType::Resupply;
}
