#include "relays.h"

Relays::Relays(QObject *parent) :
    QObject(parent),
    relay_state(0)
{
}

int Relays::getRelayState()
{
    return relay_state;
}

void Relays::setRelayState(int state)
{
    this->relay_state = state;
}

QByteArray Relays::MSG_RELAY("\x40\x07\x01\x0A\x00\x00\x52", 7);
