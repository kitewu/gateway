#include "relays.h"

Relays::Relays()
{
}

const QByteArray Relays::MSG_RELAY_CLOSE("\x40\x07\x01\x0A\x01\x00\x53", 7);
const QByteArray Relays::MSG_RELAY_OPEN("\x40\x07\x01\x0A\x01\x01\x54", 7);
