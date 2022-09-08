#include "serverdbconnection.h"

ServerDbConnection::ServerDbConnection(QString hostName, int port, QString databaseName, QString userName, QString password){
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName(hostName);
    db.setPort(port);
    db.setDatabaseName(databaseName);
    db.setUserName(userName);
    db.setPassword(password);
}

ServerDbConnection::~ServerDbConnection(){
    if(db.isOpen()){
        db.close();
    }
}

bool ServerDbConnection::connect(){
    if(!db.isOpen()){
        return db.open();
    }
    return false;
}

bool ServerDbConnection::disconnect(){
    if(db.isOpen()){
        db.close();
        return true;
    }
    return false;
}

bool ServerDbConnection::isConnected(){
    return db.isOpen();
}

QSqlDatabase ServerDbConnection::getDB(){
    return db;
}
