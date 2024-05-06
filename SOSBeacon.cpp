#pragma once

#include <Arduino.h>

#include "SOSBeacon.h"

const String SOSBeacon::strategemName() const {
  return F("SOS Beacon");
}

const String SOSBeacon::keyCode() const {
  return F("wsdw");
}

const StrategemType SOSBeacon::strategemID() const {
  return StrategemType::SOSBeacon;
}
