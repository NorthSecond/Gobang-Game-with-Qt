#pragma once

#include <QHostAddress>
#include <QTcpServer>
#include <QTcpSocket>

class TCPserver
{
private：
    QTcpServer *server;
    QTcpSocket *socket;
    QHostAddress *address;
    int port;
public:
    TCPserver(int port);
    ~TCPserver();
    void server_start();
    void server_stop();
    
    void send_msg(QString msg);
};

