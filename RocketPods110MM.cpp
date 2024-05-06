#pragma once

#include <Arduino.h>

#include "RocketPods110MM.h"

const String RocketPods110MM::strategemName() const {
  return F("110MM Rocket Pods");
}

const String RocketPods110MM::keyCode() const {
  return F("wdwa");
}

const StrategemType RocketPods110MM::strategemID() const {
  return StrategemType::RocketPods110MM;
}
