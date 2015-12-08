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

void pushScientistsIntoVector(vector<Scientist>& v, QSqlQuery q)
{
    Scientist next;
    while(q.next())
    {
        next.setID_Scientist(q.value("ID").toInt());
        next.setName_Scientist(q.value("Name").toString().toStdString());
        next.setBirth_Scientist(q.value("Birth").toInt());
        next.setDeath_Scientist(q.value("Death").toInt());
        next.setGender_Scientist(q.value("Gender").toString().toStdString());

        v.push_back(next);
    }
}

vector<Scientist> Data::SortSci(QString str)
{
    //ATH ef valið er t.d. ORDER BY Gender ASC þá þarf fallið fyrir neðan að vera:
    //query.bindValue("Gender", QString::fromStdString("dbName"));
    // á eftir að finna út því, líklegast að taka inn streng í parameter með "Gender"
    //Þessi kóði virkar bara fyrir ORDER BY name in ASC
    //Held það sé best að setja strengi inn í Switch setn í fallinu sorScientists í Engine class

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

    return scientistVector;
}

vector<Computer> Data::SortCom(QString str)
{
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

    return computerVector;

}

vector<Scientist> Data::searchSci()
{
    openDatabase();
    QSqlQuery query(db);

    //QString search = QString::fromStdString(searchText);
    string s;
    cout << "Search: ";
    cin >> s;

    query.prepare("SELECT * FROM Persons WHERE Name LIKE '%'||QString::fromStdString(s)||'%' ");
    query.bindValue("ID",QString::fromStdString(s));
    query.bindValue("Name",QString::fromStdString(s));
    query.bindValue("Birth",QString::fromStdString(s));
    query.bindValue("Death",QString::fromStdString(s));
    query.bindValue("Gender",QString::fromStdString(s));

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
