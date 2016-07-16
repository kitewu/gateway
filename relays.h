#ifndef RELAYS_H
#define RELAYS_H

#include <QObject>

class Relays : public QObject
{
    Q_OBJECT
public:
    explicit Relays(QObject *parent = 0);
    int getRelayState();
    void setRelayState(int);
signals:
    
public slots:

private:
    int relay_state;
public:
    static QByteArray MSG_RELAY;
};

#endif // RELAYS_H
