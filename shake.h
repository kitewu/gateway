#ifndef SHAKE_H
#define SHAKE_H

#include <QObject>

class Shake : public QObject
{
    Q_OBJECT
public:
    explicit Shake(QObject *parent = 0);
    void setShakeState(int);
    int getShakeState();
signals:
    
public slots:
private:
    int shake_state;
};

#endif // SHAKE_H
