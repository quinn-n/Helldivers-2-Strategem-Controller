#pragma once

#include "JumpPack.h"

const String JumpPack::strategemName() const {
  return F("Jump Pack");
}

const String JumpPack::keyCode() const {
  return F("swwsw");
}

const StrategemType JumpPack::strategemID() const {
  return StrategemType::JumpPack;
}
