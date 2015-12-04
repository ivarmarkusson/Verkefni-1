#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include "data.h"
using namespace std;

class Engine
{
public:
    Engine();

    bool sqlConnect();
    void sqlAddComputer();
    void printComputer();

    int userInput();
};

#endif // ENGINE_H
