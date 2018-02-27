#ifndef SIGN_DATA_H
#define SIGN_DATA_H

#define UINT8_MAX 0xFF
#define UINT16_MAX 0xFFFF

#include "Arduino.h"

const uint8_t UINT8_MAX_2 = UINT8_MAX/2;

struct SignData{
  bool isMotion;
  unsigned int analogPIR;

  /*
  uint16_t tempo; // Period between taps
  uint8_t pushLayer;
  uint8_t rolloff;
  bool shouldStep;
  uint16_t volume;
  uint16_t maxVolume;
  uint16_t freqAmp[FREQ_COUNT];
  uint16_t maxFreqAmp[FREQ_COUNT];
  */
};
#endif
