#ifndef DATA_H
#define DATA_H

#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QFileInfo>
#include <QString>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>
#include "scientist.h"
#include "computer.h"
#include "connection.h"
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

class Scientist;
class Computer;
class Connection;

class Data
{
    public:
        Data();
        QSqlDatabase db;

        void openDatabase();
        //Opens database from SQL
        void closeDatabase();
        //Closes database

        vector<Scientist> SortSci(QString str);
        vector<Computer> SortCom(QString str);
        //Runs SQL database and returns a vector to be printed out

        void pushScientistIntoVector(vector<Scientist>& v, QSqlQuery q);
        //Push Scientist into vector

        void AddSci(QString str);
        void AddCom(QString str);
        void AddConnected(QString str);
        //Adds new scientist, computer and connection to the list

        void RemoveSci(QString str);
        void RemoveCom(QString str);
        //Removes scientist or computer from the list

        void clearSciVector();
        void clearComVector();
        void clearConnectVector();
        //Clears vector in Data Class

        vector<Scientist> searchSci(QString str);
        vector<Computer> searchCom(QString str);

        vector<Connection> viewConnected(QString str);

        vector<Scientist> scientistVector;
        vector<Computer> computerVector;
        vector<Connection> connectionVector;
        //Vectors that data is pushed into for printing
};

#endif // DATA_H
