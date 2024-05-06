#pragma once

#include <Keyboard.h>

#include "Strategem.h"

Strategem::Strategem() {}

void Strategem::callStrategem(bool useArrowKeys) const {
  Keyboard.press(KEY_LEFT_CTRL);
  delay(KEYPRESS_TIME);
  for (const char c: keyCode()) {
    if (!useArrowKeys) {
      Keyboard.press(c);
      delay(KEYPRESS_TIME);
      Keyboard.release(c);
      delay(KEYPRESS_TIME);
    } else {
      pressArrowKey(c);
    }
  }
  Keyboard.release(KEY_LEFT_CTRL);
}

void Strategem::pressArrowKey(char wasdInput) const {
  switch (wasdInput) {
    case 'w':
      Keyboard.press(KEY_UP_ARROW);
      delay(KEYPRESS_TIME);
      Keyboard.release(KEY_UP_ARROW);
      delay(KEYPRESS_TIME);
      break;
    case 'a':
      Keyboard.press(KEY_LEFT_ARROW);
      delay(KEYPRESS_TIME);
      Keyboard.release(KEY_LEFT_ARROW);
      delay(KEYPRESS_TIME);
      break;
    case 's':
      Keyboard.press(KEY_DOWN_ARROW);
      delay(KEYPRESS_TIME);
      Keyboard.release(KEY_DOWN_ARROW);
      delay(KEYPRESS_TIME);
      break;
    case 'd':
      Keyboard.press(KEY_RIGHT_ARROW);
      delay(KEYPRESS_TIME);
      Keyboard.release(KEY_RIGHT_ARROW);
      delay(KEYPRESS_TIME);
      break;
  }
}
