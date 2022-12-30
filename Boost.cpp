#include "Effect.h"

class Boost : Effect {
public:
  int process(int input) {
    if (this->Enabled) {
      input = map(input, -32768, +32768, -Volume, Volume);
    }
    return input;
  }
  bool Enabled;
  int Volume;
};
