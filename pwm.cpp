#include "pwm.h"

Pwm::Pwm(QObject *parent) :
    QObject(parent),
    pwm_state(0),
    range(1)
{
}

void Pwm::setPwmState(int pwm_state)
{
    this->pwm_state = pwm_state;
}

int Pwm::getPwmState()
{
    return pwm_state;
}

void Pwm::setRange(int range)
{
    this->range = range;
}

int Pwm::getRange()
{
    return range;
}

QByteArray Pwm::RANGE("\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09", 10);
QByteArray Pwm::MSG_PWM("\x40\x06\x01\x09\x00\x50", 6);
