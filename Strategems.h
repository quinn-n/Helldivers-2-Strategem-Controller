#pragma once

#include <Arduino.h>
#include <ArxContainer.h>
#include <ArduinoSTL.h>
using std::vector;

#include "Strategem.h"

class Strategems {
  public:
  Strategems();
  ~Strategems();
  const Strategem* operator[] (const StrategemType strategemID) const;
  const Strategem* operator[] (const String& strategemName) const;

  /**
   * @brief Create a keymap for the `Keypad` library from the given strategem names
   * @param strategemNames The names of the strategems to include in the keymap
   * @returns The keymap
  */
  const String makeKeypadKeymap(const vector<StrategemType>& strategemNames) const;

  private:
  std::map<StrategemType, const Strategem*, static_cast<int>(StrategemType::NStrategems) - 1> strategems;
  void addStrategem(const Strategem* strategem);
};

