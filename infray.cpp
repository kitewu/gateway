#include "infray.h"

InfRay::InfRay(QObject *parent) :
    QObject(parent),
    inf_ray_state(0)
{
}
void InfRay::setInfRayState(int inf_ray_state)
{
    this->inf_ray_state = inf_ray_state;
}

int InfRay::getInfRayState()
{
    return inf_ray_state;
}
