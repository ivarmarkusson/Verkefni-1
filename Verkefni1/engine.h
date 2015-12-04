#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "data.h"
#include "computer.h"
#include <vector>
using namespace std;

class Engine
{
public:
    Engine();

    bool sqlConnect();
    void sqlAddComputer();
    //void printComputer();
    //vector<Computer>inputFromSql();

    int userInput();
};

#endif // ENGINE_H
