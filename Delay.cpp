#include "Effect.h"
#define MAX_DELAY 2000

class Delay : Effect {
public:
  int process(int input) {
    if (this->Enabled) {
      DelayCounter++;
      unsigned char highByte = ((input + 0x8000) >> 8);
      unsigned char lowByte = input;
      DelayBuffer[DelayCounter] = highByte;
      if (DelayCounter >= Delay_Depth) DelayCounter = 0;
      input = (((DelayBuffer[DelayCounter] << 8) | lowByte) + 0x8000) + (((highByte << 8) | lowByte) + 0x8000);  // make a signed 16b value
    }
    return input;
  }
  bool Enabled;
  unsigned char DelayBuffer[MAX_DELAY];
  unsigned int DelayCounter = 0;
  unsigned int Delay_Depth = MAX_DELAY;
};
