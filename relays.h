#ifndef RELAYS_H
#define RELAYS_H

#include "enddevice.h"

class Relays : public EndDevice
{
public:
    explicit Relays();

public:
    const static QByteArray MSG_RELAY_CLOSE;
    const static QByteArray MSG_RELAY_OPEN;
};

#endif // RELAYS_H
