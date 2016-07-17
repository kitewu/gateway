#include "socketservice.h"

SocketService::SocketService(QObject *parent) :
    QObject(parent)
{
    server = new QTcpServer();
    server->listen(QHostAddress::Any, 5678);
    connect(server, SIGNAL(newConnection()), this, SLOT(acceptConnection()));
}

void SocketService::acceptConnection()
{
    QTcpSocket *client = server->nextPendingConnection();
    clients_list.append(client);
    connect(client, SIGNAL(readyRead()), this, SLOT(readMsg()));
}

void SocketService::readMsg()
{
    QListIterator<QTcpSocket*> i(clients_list);
    while (i.hasNext())
    {
        QString msg = i.next()->readAll();
        if(!msg.isEmpty())
            emit receiveMsgFromSocket(msg);
    }
}

void SocketService::sendMsg()
{

}
