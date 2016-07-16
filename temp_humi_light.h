#ifndef TEMP_HUMI_LIGHT_H
#define TEMP_HUMI_LIGHT_H

#include <QObject>

class Temp_Humi_Light : public QObject
{
    Q_OBJECT
public:
    explicit Temp_Humi_Light(QObject *parent = 0);
    void setValue(QByteArray&);
    void setValue(int, int, float);
    int getTemperature();
    int getHumidity();
    float getLight();
signals:
    
public slots:

private :
    int temperature;
    int humidity;
    float light;
};

#endif // TEMP_HUMI_LIGHT_H
