#ifndef MOTION_H
#define MOTION_H

#include "Range.h"

class Motion{
  public:
    Motion();
    void setAnalog(uint16_t newValue);
    void setDigital(bool newValue);
    void resetCurrent();

    bool isMotion();
    unsigned long lastMotion();
    uint16_t currAvg();
    uint8_t avgMap(uint8_t low, uint8_t high);

  private:
    void setRangeWithValue(RangeU16 &range, uint16_t value);

    bool _isMotion;
    unsigned long lastTime;
    RangeU16 currRange;
    RangeU16 maxRange;
};

#endif