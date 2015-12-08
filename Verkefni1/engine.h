#ifndef ENGINE_H
#define ENGINE_H

#include <QCoreApplication>
#include <string>
#include "data.h"
#include "computer.h"
#include <vector>
#include <QtSql>
#include <algorithm>
#include <iomanip>

using namespace std;

class Scientist;
class Computer;


class Engine:Data
{
public:
    Engine();

    void sortSientists(int i);
    void sortComputers(int i);
    //Sort Functions, for sort choices

    //fallið á einungis að endurraða
    //Scientists vectornum í data
    //áður en hann er prentaður út
    //void sortComputers();               //Á eftir að útfæra <-
    //fallið á einungis að endurraða
    //Computers vectornum í data
    //áður en hann er prentaður út

    void printScientistsVector(vector<Scientist> sci);
    void printComputersVector(vector<Computer> sci);
    //Print Functions that print out the current vector

    int userInput();

};

#endif // ENGINE_H
