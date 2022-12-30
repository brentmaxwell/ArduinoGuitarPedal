#ifndef _EFFECT_H_
#define _EFFECT_H_
#include <Arduino.h>

class Effect {
public:
  int process(int input);
  bool Enabled;
};

#endif