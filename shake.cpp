#include "shake.h"

Shake::Shake(QObject *parent) :
    QObject(parent),
    shake_state(0)
{
}

void Shake::setShakeState(int shake_state)
{
    this->shake_state = shake_state;
}

int Shake::getShakeState()
{
    return shake_state;
}
