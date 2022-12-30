#include "Effect.h"

class BitCrusher : Effect {
public:
  int process(int input) {
    if (this->Enabled) {
      input = input << this->CrushLevel;
    }
    return input;
  }
  bool Enabled;
  unsigned char CrushLevel;
};
