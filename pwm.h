#ifndef PWM_H
#define PWM_H

#include <QObject>

class Pwm : public QObject
{
    Q_OBJECT
public:
    explicit Pwm(QObject *parent = 0);
    void setPwmState(int);
    int getPwmState();
    void setRange(int);
    int getRange();
signals:
    
public slots:

private:
    int pwm_state;
    int range;
public:
    static QByteArray RANGE;
    static QByteArray MSG_PWM;
};

#endif // PWM_H
