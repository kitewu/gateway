#ifndef SOCKETSERVICE_H
#define SOCKETSERVICE_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QList>

class SocketService : public QObject
{
    Q_OBJECT
public:
    explicit SocketService(QObject *parent = 0);
    
signals:
    void receiveMsgFromSocket(QString);
public slots:
    void readMsg();
    void sendMsg();
    void acceptConnection();
private:
    QTcpServer *server;
    QList<QTcpSocket*> clients_list;
};

#endif // SOCKETSERVICE_H
