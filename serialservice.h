#ifndef SERIALSERVICE_H
#define SERIALSERVICE_H

#include <QObject>
#include <QByteArray>
#include <QString>
#include <QTimer>

#include "posix_qextserialport.h"
#define READTIME 100

class SerialService : public QObject
{
    Q_OBJECT
public:
    explicit SerialService(QObject *parent = 0);

    qint64 readFromSerial(QByteArray &byte);
    int writeToSerial(const QByteArray &byte);
    bool openCom();
    bool closeCom();
    void releaseSerial();
    QTimer* getTimer();
signals:

public slots:

private:
    Posix_QextSerialPort *my_com;
    enum{OPEN, CLOSE};
    int com_state;
    QTimer *read_timer;
};

#endif // SERIALSERVICE_H
