/**
 * @file main.cpp
 * @author yangyf83(yangyf83@aliyun.com)
 * @brief the main function of the program
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022 with MIT License.
 * 
 */


#include <QCoreApplication>
#include <QDebug>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << QSqlDatabase::drivers();
    return a.exec();
}
