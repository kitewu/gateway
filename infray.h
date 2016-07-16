#ifndef INFRAY_H
#define INFRAY_H

#include <QObject>

class InfRay : public QObject
{
    Q_OBJECT
public:
    explicit InfRay(QObject *parent = 0);
    void setInfRayState(int);
    int getInfRayState();
signals:
    
public slots:
private:
    int inf_ray_state;
};

#endif // INFRAY_H
