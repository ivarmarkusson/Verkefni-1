#ifndef SQL_H
#define SQL_H
#include <QString>
#include <QtSql>
#include <vector>
#include "scientist.h"
#include "computer.h"
#include <iostream>

using namespace std;

class Sql
{
public:
    Sql();

    void connect(QString sqlname);
    void disconnect();
    QSqlQuery getQuery();

    // --- ADD ---
    void addScientist();               //Á eftir að útfæra <-
    void addComputer();

    // --- REMOVE ---
    //Vantar remove Scientist og Computer föll
    //Heyrði að það væri gott að láta föllin bara fela upplýsingarnar
    //Það er víst einhver skipun í SQL sem gerir það :)

    // --- SEARCH ---
    vector<Scientist> searchSientists(QString searchtext);               //Á eftir að útfæra <-
    //fallið leitar í frægireinstak af einhverju input-i(searchtext)
    //Og skilar vectori sem inniheldur alla einstaklingana sem fundust
    vector<Computer> searchComputers(string searchtext);               //Á eftir að útfæra <-
    //fallið leitar í Computers af einhverju input-i(searchtext)
    //Og skilar vectori sem inniheldur allar tölvur sem fundust

private:
    QSqlDatabase db;
};

#endif // SQL_H
