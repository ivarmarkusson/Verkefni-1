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
#include <cctype>

using namespace std;

class Scientist;

Data::Data()
{

}

void Data::openDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = QString("Database (4).sqlite");
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
        if(query.value("Hide")==false)
        {
            int id = query.value("id").toUInt();
            string name = query.value("Name").toString().toStdString();
            string birth = query.value("Birth").toString().toStdString();
            string death = query.value("Death").toString().toStdString();
            string gender = query.value("Gender").toString().toStdString();

            Scientist sci(id, name, birth, death, gender);

            scientistVector.push_back(sci);
        }
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
        if(query.value("Hide")==false)
        {
            int id = query.value("id").toUInt();
            string name = query.value("Name").toString().toStdString();
            string year = query.value("Year").toString().toStdString();
            string type = query.value("Type").toString().toStdString();
            string built = query.value("Built").toString().toStdString();

            Computer com(id, name, year, type, built);

            computerVector.push_back(com);
        }
    }
    closeDatabase();
    return computerVector;

}

void Data::AddSci(QString str)
{
    openDatabase();
    QSqlQuery query(db);
    string Name, Birth, Death, Gender;
    string Hide = "false";

    //toupper fall fyrir name

    cout << "Enter Firstname: ";
    getline(cin, Name, '\n');
    cout << "Enter Year Of Birth: ";
    getline(cin, Birth, '\n');
    cout << "Enter Year Of Death (Enter 'Alive' If The Person Is Not Dead): ";
    getline(cin, Death, '\n');
    cout << "Enter Gender: ";
    getline(cin, Gender, '\n');

    query.prepare(str);
    query.bindValue(":Name", QString::fromStdString(Name));
    query.bindValue(":Birth", QString::fromStdString(Birth));
    query.bindValue(":Death", QString::fromStdString(Death));
    query.bindValue(":Gender", QString::fromStdString(Gender));
    query.bindValue(":Hide", QString::fromStdString(Hide));
    query.exec();

    closeDatabase();
}

void Data::AddCom(QString str)
{
    openDatabase();
    QSqlQuery query(db);
    string Name, Year, Type, Built;
    string Hide = "false";

    //toupper fall fyrir name

    cout << "Enter Firstname: ";
    getline(cin, Name, '\n');
    cout << "Enter Build Year: ";
    getline(cin, Year, '\n');
    cout << "Enter Type: ";
    getline(cin, Type, '\n');
    cout << "Enter If Built(Yes) Or Not(No): ";
    getline(cin, Built, '\n');
    Built[0] = toupper(Built[0]);

    query.prepare(str);
    query.bindValue(":Name", QString::fromStdString(Name));
    query.bindValue(":Year", QString::fromStdString(Year));
    query.bindValue(":Type", QString::fromStdString(Type));
    query.bindValue(":Built", QString::fromStdString(Built));
    query.bindValue(":Hide", QString::fromStdString(Hide));
    query.exec();

    closeDatabase();
}
/*
void Data::RemoveSci(QString str)
{
    openDatabase();
    QSqlQuery query(db);
}

void Data::RemoveCom(QString str)
{
    openDatabase();
    QSqlQuery query(db);
}
*/
vector<Scientist> Data::searchSci(QString str)
{
    openDatabase();
    QSqlQuery query(db);

    string n,b,d,g;
    cout << "Search Name: ";
    getline(cin,n,'\n');
    cout << "Search Year of Birth: ";
    getline(cin,b,'\n');
    cout << "Search Year of Death: ";
    getline(cin,d,'\n');
    cout << "Search Gender: ";
    getline(cin,g,'\n');


    query.prepare(str);

    query.bindValue(":Name",QString::fromStdString(n));
    query.bindValue(":Birth",QString::fromStdString(b));
    query.bindValue(":Death",QString::fromStdString(d));
    query.bindValue(":Gender",QString::fromStdString(g));

    query.exec();

    while(query.next())
    {
        if(query.value("Hide")==false)
        {
            int id = query.value("id").toUInt();
            string name = query.value("Name").toString().toStdString();
            string birth = query.value("Birth").toString().toStdString();
            string death = query.value("Death").toString().toStdString();
            string gender = query.value("Gender").toString().toStdString();


            Scientist sci(id, name, birth, death, gender);

            scientistVector.push_back(sci);
        }
    }
    system("CLS");
    query.clear();
    closeDatabase();
    return scientistVector;
}

vector<Computer> Data::searchCom(QString str)
{
    openDatabase();
    QSqlQuery query(db);

    string n,y,t,b;
    cout << "Search Name: ";
    getline(cin,n,'\n');
    cout << "Search Year of Build: ";
    getline(cin,y,'\n');
    cout << "Search Type: ";
    getline(cin,t,'\n');
    cout << "Search if Built: ";
    getline(cin,b,'\n');


    query.prepare(str);

    query.bindValue(":Name",QString::fromStdString(n));
    query.bindValue(":Year",QString::fromStdString(y));
    query.bindValue(":Type",QString::fromStdString(t));
    query.bindValue(":Built",QString::fromStdString(b));

    query.exec();

    while(query.next())
    {
        if(query.value("Hide")==false)
        {
            int id = query.value("id").toUInt();
            string name = query.value("Name").toString().toStdString();
            string year = query.value("Year").toString().toStdString();
            string type = query.value("Type").toString().toStdString();
            string built = query.value("built").toString().toStdString();

            Computer com(id, name, year, type, built);

            computerVector.push_back(com);
        }
    }
    system("CLS");
    query.clear();
    closeDatabase();
    return computerVector;
}

