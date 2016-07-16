#include "serialservice.h"

SerialService::SerialService(QObject *parent) :
    QObject(parent),
    my_com(0),
    com_state(CLOSE)
{
    read_timer = new QTimer();
    read_timer->start(READTIME);
}

qint64 SerialService::readFromSerial(QByteArray &byte)
{
    if(my_com&&OPEN == com_state)
    {
        byte = my_com->readAll();
        return byte.length();
    }
    return -1;
}

int SerialService::writeToSerial(const QByteArray &byte)
{
    if(my_com&&OPEN == com_state)
    {
        return my_com->write(byte);
    }
    return -1;
}

bool SerialService::openCom()
{
    if(my_com)
    {
        closeCom();
    }
    else
    {
        QString com_name = "/dev/ttySAC1";
        my_com = new Posix_QextSerialPort(com_name, QextSerialBase::Polling);
    }
    my_com->open(QIODevice::ReadWrite);
    if(my_com->isOpen())
    {
        com_state = OPEN;
        my_com->setBaudRate(BAUD115200);
        my_com->setDataBits(DATA_8);
        my_com->setParity(PAR_NONE);
        my_com->setStopBits(STOP_1);
        my_com->setFlowControl(FLOW_OFF);
        my_com->setTimeout(50);
        return true;
    }
    else
    {
        com_state = CLOSE;
        return false;
    }
}

bool SerialService::closeCom()
{
    if(my_com&&CLOSE!=com_state)
    {
        my_com->close();
    }
    com_state = CLOSE;
    return true;
}

void SerialService::releaseSerial()
{
    if(my_com)
    {
        closeCom();
        delete my_com;
        my_com = 0;
    }
}

QTimer* SerialService::getTimer()
{
    return read_timer;
}
