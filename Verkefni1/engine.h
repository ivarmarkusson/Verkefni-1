#ifndef ENGINE_H
#define ENGINE_H

#include <QCoreApplication>
#include <string>
#include "data.h"
#include "computer.h"
#include <vector>
#include <QtSql>
#include <algorithm>
using namespace std;

class Engine
{
public:
    Engine();

    void printComputer();
    //string addPerson(const string &name, const int &birth, const int  &death, const string &gender);

    void sortSientists();               //Á eftir að útfæra <-
    //fallið á einungis að endurraða
    //Scientists vectornum í data
    //áður en hann er prentaður út
    void sortComputers();               //Á eftir að útfæra <-
    //fallið á einungis að endurraða
    //Computers vectornum í data
    //áður en hann er prentaður út


    //QSqlDatabase startDatabase();
    vector<Scientist> readAscSciDatabase();

    int userInput();

    Data d_obj;

};

#endif // ENGINE_H
