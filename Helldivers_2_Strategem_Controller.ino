#include <Keypad.h>
#include <Keyboard.h>

#include "Strategems.h"
#include "Strategem.h"

static const bool USE_ARROW_KEYS = true;

const vector<StrategemType> keymap = {
  StrategemType::Resupply, StrategemType::Reinforce, StrategemType::NullStrategem, StrategemType::NullStrategem,
  StrategemType::Airstrike, StrategemType::ClusterBomb, StrategemType::Bomb500kg, StrategemType::EagleRearm,
  StrategemType::GatlingSentry, StrategemType::MachineGunSentry, StrategemType::AutocannonSentry, StrategemType::IncendiaryMinefield,
  StrategemType::Stalwart, StrategemType::RifleGuardDog, StrategemType::RecoillessRifle, StrategemType::QuasarCannon
};

static byte ROW_PINS[] = { 6, 7, 8, 9 };
static byte COL_PINS[] = { 5, 4, 3, 2 };

Strategems strategems = Strategems();

Keypad* keypad = nullptr;

void setup() {
  Keyboard.begin();

  const String keypadKeymap = strategems.makeKeypadKeymap(keymap);

  keypad = new Keypad(
    makeKeymap(keypadKeymap.c_str()),
    ROW_PINS,
    COL_PINS,
    static_cast<byte>(4),
    static_cast<byte>(4)
  );
}

void loop() {
  char key = keypad->getKey();
  if (key) {
    const Strategem* strategem = strategems[static_cast<const StrategemType>(key)];
    strategem->callStrategem(USE_ARROW_KEYS);
  }
}
