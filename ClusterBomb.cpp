#pragma once

#include <Arduino.h>

#include "ClusterBomb.h"

const String ClusterBomb::strategemName() const {
  return F("Cluster Bomb");
}

const String ClusterBomb::keyCode() const {
  return F("wdssd");
}

const StrategemType ClusterBomb::strategemID() const {
  return StrategemType::ClusterBomb;
}
