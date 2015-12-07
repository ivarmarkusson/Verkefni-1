
#include "engine.h"
#include <iostream>
#include <QtSql>
#include <string>
#include "string"
#include "computer.h"
#include "data.h"
#include "scientist.h"


using namespace std;

Engine::Engine()
{

}

int Engine::userInput()
{
    int i;
    cin >> i;
    cin.ignore();
    return i;
}
/*
QSqlDatabase Engine::startDatabase()
{
     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     QString dbName = "C:\\Users\\Notandi\\Desktop\\week-2\\Verkefni-1\\Verkefni1\\FrægirEinstakl.sqlite";
     db.setDatabaseName(dbName);
     db.open();
     if (!db.open())
     {
         cout << "badshit" << endl;
     }

     else
     {
         cout << "goodshit" << endl;
     }

     return db;
}
*/
vector<Scientist> Engine::readAscSciDatabase()
 {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Persons.sqlite";
    db.setDatabaseName(dbName);
    db.open();
    if (!db.open())
    {
        cout << "badshit" << endl;
    }

    else
    {
        cout << "goodshit" << endl;
    }

     QSqlQuery query(dbName);

     query.prepare("Select * FROM People ORDER BY Name ASC");

     while(query.next())
     {

         qDebug() << query.lastQuery();
         int id = query.value(0).toUInt();
         string name = query.value("Name").toString().toStdString();
         string gender = query.value("Gender").toString().toStdString();
         int birth = query.value("Birth").toUInt();
         int death = query.value("Death").toUInt();

         Scientist sci(id,name,gender,birth,death);
         d_obj.getSciVector().push_back(sci);
     }

     return d_obj.getSciVector();
 }


/*
void Engine::sqlAddComputer()
{
    int id, Year;
    string Name, Type, Built;
    QSqlQuery query;

    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> Name;
    cout << "Year Built: ";
    cin >> Year;
    cout << "Type of Computer: ";
    cin >> Type;
    cout << "Was The computer built(Yes,No): ";
    cin >> Built;

    query.exec("insert into computers values(id, Name, Year, Type, Built)");
}


void Engine::printComputer()
{
    Data object;
    cout << "id" << "Name" << "Year" << "Type" << "Built";

    for(unsigned int i = 0; i < object.getComputerVector().size(); i++)
    {
      cout << object.getComputerVector().at(i).getName_Computer();
      cout << object.getComputerVector().at(i).getType_Computer();
      cout << object.getComputerVector().at(i).getYearBuilt_Computer();
      cout << object.getComputerVector().at(i).getBuilt_Computer();
    }
}
*/




/*vector<Computer> Engine::inputFromSql()
{
    vector<Computer> tmp;
    QSqlQuery query;
    string str ;

    query.exec("Select * FROM Computers WHERE id = :id);");
    query.bindValue(":id", QString::fromStdString(str));

    query.exec();

    while(query.next())
    {
        Computer c;

        qDebug() << query.lastQuery();
        c.getId_Computer()         = query.value(0).toUInt();
        c.getName_Computer()       = query.value("Name").toString().toStdString();
        c.getYearBuilt_Computer()  = query.value("Year").toUInt();
        c.getType_Computer()       = query.value("Type").toString().toStdString();
        c.getBuilt_Computer()      = query.value("Built").toUInt();

        tmp.push_back(c);
    }

    return tmp;
}
*/

//Add Person

/*string Engine::addPerson(const string &name, const int &birth, const int  &death, const string &gender)
{
    QSqlDatabase db;

    if (db.open())
    {
        QSqlQuery query;

        QString n = QString::fromStdString(name);
        QString i = QString::fromStdString(birth);
        QString d = QString::fromStdString(death);
        QString g = QString::fromStdString(gender);

        query.prepare("INSERT INTO persons (Name, Birth, Death, Gender) "
                      "VALUES (:name, :birth, :death, :gender)");

        //bindValue- is a alternative way to pass data to the database
        query.bindValue(":name",n);
        query.bindValue(":birth",i);
        query.bindValue(":dead",d);
        query.bindValue(":gender",g);

        if(!query.exec())
        {
            return query.lastError().text().toStdString();
        }

        db.close();
        return 0;

    }

    else
    {
        return "no conection to database";
    }

}*/
