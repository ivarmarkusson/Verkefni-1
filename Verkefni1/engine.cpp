#include "engine.h"
#include <iostream>
#include <QtSql>

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



int Engine::userInput()
{
    int i;
    cin >> i;
    cin.ignore();
    return i;
}
