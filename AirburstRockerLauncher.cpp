#pragma once

#include <Arduino.h>

#include "AirburstRocketLauncher.h"

const String AirburstRocketLauncher::strategemName() const {
  return F("Airburst Rocket Launcher");
}

const String AirburstRocketLauncher::keyCode() const {
  return F("swwad");
}

const StrategemType AirburstRocketLauncher::strategemID() const {
  return StrategemType::AirburstRocketLauncher;
}
