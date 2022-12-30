#include "Effect.h"

class Distortion : Effect {
public:
  int process(int input) {
    if (this->Enabled) {
      if (input > this->DistortionThreshold) input = this->DistortionThreshold;
    }
    return input;
  }
  bool Enabled;
  int DistortionThreshold;
};
