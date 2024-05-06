#pragma once

#include <Arduino.h>

#include "Strategem.h"

class EMSStrike: public Strategem {
  public:
  const String strategemName() const override;
  const String keyCode() const override;
  const StrategemType strategemID() const override;
};