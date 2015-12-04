#include <QCoreApplication>
#include "engine.h"
#include <iostream>
#include <QtSql>
#include <string>
#include "string"
#include "computer.h"

using namespace std;

Engine::Engine()
{

}

bool Engine::sqlConnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "C:\\Users\\Notandi\\Desktop\\Skil1\\Verkefni-1\\Verkefni1\\computers.sql";
    db.setDatabaseName(dbName);

    if (!db.open())
    {
        cout << "badshit" << endl;
        return false;
    }

    else
    {
        cout << "goodshit" << endl;
        return true;
    }
}

void Engine::sqlAddComputer()
{
//    INSERT INTO computers(id, Name, Year, Type, Built);
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



int Engine::userInput()
{
    int i;
    cin >> i;
    cin.ignore();
    return i;
}

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
