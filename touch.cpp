#include "touch.h"

Touch::Touch(QObject *parent) :
    QObject(parent),
    touch_state(0)
{
}

void Touch::setTouchState(int state)
{
    if(state == 1 || state == 0)
        this->touch_state = state;
}

int Touch::getTouchState()
{
    return touch_state;
}

const QByteArray Touch::MSG_NO_TOUCH("\x40\x07\x01\x07\x01\x00\x50", 7);
const QByteArray Touch::MSG_TOUCH("\x40\x07\x01\x07\x01\x01\x51", 7);
