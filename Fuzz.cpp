#include "Effect.h"

class Fuzz : Effect {
public:
  int process(int input) {
    if (this->Enabled) {
      if (input > this->DistortionThreshold) input = 32768;
      else if (input < -this->DistortionThreshold) input = -32768;
    }
    return input;
  }
  bool Enabled;
  int DistortionThreshold;
};
