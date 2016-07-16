#ifndef TEMP_HUMI_LIGHT_H
#define TEMP_HUMI_LIGHT_H

#include <QObject>
#include "enddevice.h"

class Temp_Humi_Light : public EndDevice
{
public:
    explicit Temp_Humi_Light();
    void setValue(QByteArray&);
    void setValue(int, int, float);
    int getTemperature();
    int getHumidity();
    float getLight();

private :
    int temperature;
    int humidity;
    float light;
};

#endif // TEMP_HUMI_LIGHT_H
