#include "motor.h"

Motor::Motor(QObject *parent) :
    QObject(parent)
{
    motor_state = STOP;
}

void Motor::setMotorState(int state)
{
    if(state == 1 || state == 0 || state == 2)
        this->motor_state = state;
}

int Motor::getMotorState()
{
    return motor_state;
}

const QByteArray Motor::MSG_MOTOR_FORE("\x40\x06\x01\x06\x0a\x57", 6);
const QByteArray Motor::MSG_MOTOR_BACK("\x40\x06\x01\x06\x0b\x58", 6);
const QByteArray Motor::MSG_MOTOR_STOP("\x40\x06\x01\x06\x0c\x59", 6);
