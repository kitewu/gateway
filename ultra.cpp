#include "ultra.h"

Ultra::Ultra(QObject *parent) :
    QObject(parent),
    length(0)
{
}

void Ultra::setLength(int length)
{
    this->length = length;
}

int Ultra::getLength()
{
    return length;
}
