#include "temp_humi_light.h"

Temp_Humi_Light::Temp_Humi_Light()
{
    temperature = 0;
    humidity = 0;
    light = 0;
}

void Temp_Humi_Light::setValue(int temperature, int humidity, float light)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->light = light;
}

void Temp_Humi_Light::setValue(QByteArray& byte)
{
    unsigned char adc_value[2];
    temperature = (byte[5] << 8) + byte[6];
    humidity = (byte[7] << 8) + byte[8];
    adc_value[0] = byte[10];
    adc_value[1] = byte[9];
    adc_value[0] = adc_value[0] >> 2;
    light = (adc_value[1]*256 + adc_value[0]) * 3.3 / 8192;
    light = light / 4;
    light = light * 913;
}

int Temp_Humi_Light::getTemperature()
{
    return temperature;
}

int Temp_Humi_Light::getHumidity()
{
    return humidity;
}

float Temp_Humi_Light::getLight()
{
    return light;
}
