#ifndef ENGINE_H
#define ENGINE_H

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

    bool sqlConnect();

    void sqlAddScientist();               //Á eftir að útfæra <-
    void sqlAddComputer();

    //Vantar remove Scientist og Computer föll
    //Heyrði að það væri gott að láta föllin bara fela upplýsingarnar
    //Það er víst einhver skipun í SQL sem gerir það :)

    void sortSientists();               //Á eftir að útfæra <-
    //fallið á einungis að endurraða
    //Scientists vectornum í data
    //áður en hann er prentaður út
    void sortComputers();               //Á eftir að útfæra <-
    //fallið á einungis að endurraða
    //Computers vectornum í data
    //áður en hann er prentaður út

    vector<Scientist> searchSientists(string searchtext);               //Á eftir að útfæra <-
    //fallið leitar í frægireinstak af einhverju input-i(searchtext)
    //Og skilar vectori sem inniheldur alla einstaklingana sem fundust
    vector<Computer> searchComputers(string searchtext);               //Á eftir að útfæra <-
    //fallið leitar í Computers af einhverju input-i(searchtext)
    //Og skilar vectori sem inniheldur allar tölvur sem fundust

    //QSqlDatabase startDatabase();
    vector<Scientist> readAscSciDatabase();

    int userInput();

    Data d_obj;
};

#endif // ENGINE_H
