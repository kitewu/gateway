#ifndef SMOKE_H
#define SMOKE_H

#include <QObject>

class Smoke : public QObject
{
    Q_OBJECT
public:
    explicit Smoke(QObject *parent = 0);
    void setSmokeState(int);
    int getSmokeState();
signals:
    
public slots:

private:
    int smoke_state;
};

#endif // SMOKE_H
