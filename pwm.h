#ifndef PWM_H
#define PWM_H

#include "enddevice.h"

class Pwm : public EndDevice
{
public:
    explicit Pwm();
    void setRange(int);
    int getRange();

private:
    int range;

public:
    static QByteArray RANGE;
    static QByteArray MSG_PWM;
};

#endif // PWM_H
