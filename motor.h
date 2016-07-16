#ifndef MOTOR_H
#define MOTOR_H

#include <QObject>
#define STOP 0
#define FORE 1
#define BACK 2

class Motor : public QObject
{
    Q_OBJECT
public:
    explicit Motor(QObject *parent = 0);
    void setMotorState(int);
    int getMotorState();
signals:
    
public slots:

private:
    int motor_state;

public:
    const static QByteArray MSG_MOTOR_FORE;
    const static QByteArray MSG_MOTOR_BACK;
    const static QByteArray MSG_MOTOR_STOP;
};

#endif // MOTOR_H
