# Helldivers 2 Strategem Controller

## Overview

Call in strategems in Helldivers 2 using a keypad and an arduino with [USB capabilities](https://www.arduino.cc/reference/en/libraries/keyboard/).

## Schematic

I've included a [Hardware Schematic.fzz](Hardware%20Schematic.fzz) for [Fritzing](https://fritzing.org).

## Common Configuration Steps

There are two variables that will likely need to be configured by the user:
  - The `keymap` const in [the main sketch .ino file](Helldivers_2_Strategem_Controller.ino), which maps the buttons on the keypad to in-game strategems by setting `StrategemType`s which can be found in [Strategem.h](Strategem.h)

  - The `USE_ARROW_KEYS` flag, as many players (including myself) have rebound the default `wasd` to call in strategems to the arrow keys.


## Advanced Configuration Steps

Depending on how you wired the arduino to the keypad, you may have to change the values for `ROW_PINS` and `COL_PINS`.

If your game isn't registering the keypresses from the Arduino (usually due to lag,) you may have to set the `KEYPRESS_TIME` const in [Strategem.h](Strategem.h) yourself.
