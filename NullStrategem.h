#pragma once

#include <Arduino.h>

#include "Strategem.h"

/**
 * @brief A strategem that does nothing
 * Intended to fill empty space on the keypad
*/
class NullStrategem: public Strategem {
  const String strategemName() const override;
  const String keyCode() const override;
  const StrategemType strategemID() const override;
};
