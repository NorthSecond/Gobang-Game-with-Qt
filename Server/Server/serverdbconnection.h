#pragma once
#include <QSqlDatabase>

class ServerDbConnection
{
private:
    QSqlDatabase db;
public:
    // TODO: Add sql information
    ServerDbConnection(QString hostName, int port, QString databaseName, QString userName, QString password);
    ~ServerDbConnection();

    bool connect();
    bool disconnect();
    bool isConnected();
    QSqlDatabase getDB();
};

