#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using namespace std;

class Engine
{
public:
    Engine();

    bool sqlConnect();
    void sqlAddComputer();


    int userInput();
};

#endif // ENGINE_H
