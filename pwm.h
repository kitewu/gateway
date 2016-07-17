#ifndef PWM_H
#define PWM_H

#include "enddevice.h"

class Pwm : public EndDevice
{
public:
    explicit Pwm();

public:
    static QByteArray RANGE;
    static QByteArray MSG_PWM;
};

#endif // PWM_H
