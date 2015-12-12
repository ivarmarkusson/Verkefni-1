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
class Connection;
class UI;

class Engine:Data
{
public:
    Engine();

    void sortSientists(int i);
    void sortComputers(int i);
    //Sort Functions, for sort choices.

    void searchScientists();
    void searchComputers();
    //search for scientists or computers from the list.

    void editScientists(int i);
    void editComputers(int i);
    //edit (add or remove) scientists or computers.

    void connectScientistAndComputer(int i);
    //For connecting scientists and computers

};

#endif // ENGINE_H
