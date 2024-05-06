#pragma once

#include <Arduino.h>

#include "Strategem.h"

class Barrage120MM: public Strategem {
  public:
  const String strategemName() const override;
  const String keyCode() const override;
  const StrategemType strategemID() const override;
};
