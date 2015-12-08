#include "data.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include "scientist.h"
#include "engine.h"
#include <string>
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
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Scientist;

Data::Data()
{

}

void Data::openDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = QString("database.sqlite");
    db.setDatabaseName(dbName);
    db.open();
}

void Data::closeDatabase()
{
    QString connection;
    connection = db.connectionName();
    db.close();
    db = QSqlDatabase();
    db.removeDatabase(connection);
}

void Data::clearSciVector()
{
    scientistVector.clear();
}

void Data::clearComVector()
{
    computerVector.clear();
}


vector<Scientist> Data::SortSci(QString str)
{
    openDatabase();
    QSqlQuery query(db);
    query.prepare(str);
    query.bindValue("Name", QString::fromStdString("dbName"));
    query.exec(str);
    while(query.next())
    {
        int id = query.value("id").toUInt();
        string name = query.value("Name").toString().toStdString();
        int birth = query.value("Birth").toUInt();
        int death = query.value("Death").toUInt();
        string gender = query.value("Gender").toString().toStdString();

        Scientist sci(id, name, birth, death, gender);

        scientistVector.push_back(sci);
    }
    closeDatabase();
    return scientistVector;
}

vector<Computer> Data::SortCom(QString str)
{

    openDatabase();
    QSqlQuery query(db);
    query.prepare(str);
    query.bindValue("Name", QString::fromStdString("dbName"));
    query.exec(str);
    while(query.next())
    {
        int id = query.value("id").toUInt();
        string name = query.value("Name").toString().toStdString();
        int year = query.value("Year").toUInt();
        string type = query.value("Type").toString().toStdString();
        string built = query.value("Built").toString().toStdString();

        Computer com(id, name, year, type, built);

        computerVector.push_back(com);
    }
    closeDatabase();
    return computerVector;

}

vector<Scientist> Data::searchSci(QString str)
{
    openDatabase();
    QSqlQuery query(db);

    //Muna að laga death search þegar input er = 0
    string s,g;
    int b,d;
    cout << "Search Name: ";
    getline(cin,s,'\n');
    cout << "Search Year of Birth: ";
    cin >> b;
    cout << "Search Year of Death (0 IF ALIVE): ";
    cin >> d;
    cout << "Search Gender: ";
    getline(cin,g,'\n');


    query.prepare(str);

    query.bindValue(":Name",QString::fromStdString(s));
    query.bindValue(":Birth",QString::number(b));
    query.bindValue(":Death",QString::number(d));
    query.bindValue(":Gender",QString::fromStdString(g));

    query.exec();

    while(query.next())
    {
        int id = query.value("id").toUInt();
        string name = query.value("Name").toString().toStdString();
        int birth = query.value("Birth").toUInt();
        int death = query.value("Death").toUInt();
        string gender = query.value("Gender").toString().toStdString();

        Scientist sci(id, name, birth, death, gender);

        scientistVector.push_back(sci);
    }

    query.clear();
    closeDatabase();
    return scientistVector;
}
/*
bool Data::EditSci(QString str)
{
    QSqlQuery query(db);
}
*/
