#include "smoke.h"

Smoke::Smoke(QObject *parent) :
    QObject(parent),
    smoke_state(0)
{
}
void Smoke::setSmokeState(int smoke_state)
{
    this->smoke_state = smoke_state;
}

int Smoke::getSmokeState()
{
    return smoke_state;
}
