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
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

class Scientist;
class Computer;

class Data
{
    public:
        Data();
        QSqlDatabase db;

        QSqlQuery getQuery();


        void close();
        //Closes database

        vector<Scientist> SortSci(QString str);
        vector<Computer> SortCom(QString str);
        //Runs SQL database and returns a vector to be printed out

        void pushScientistIntoVector(vector<Scientist>& v, QSqlQuery q);

        bool EditSci(Scientist sci);

        void clearSciVector();
        void clearComVector();
        //Clears vector in Data Class

        // Er ekki alveg búinn að sjá hvað kemur hér
        // En vectorarnir í private eiga að vera

        vector<Scientist> searchScientists(QString searchtext);

        vector<Scientist> scientistVector;
        vector<Computer> computerVector;
        //Vectors that data is pushed into for printing


};

#endif // DATA_H
