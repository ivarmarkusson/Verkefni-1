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
    void sqlAddComputer();

    //QSqlDatabase startDatabase();
    vector<Scientist> readAscSciDatabase();

    int userInput();

    Data d_obj;
};

#endif // ENGINE_H
