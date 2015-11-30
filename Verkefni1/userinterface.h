#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>

using namespace std;

class UserInterface
{
public:
    UserInterface();
    void MainMenu();
    bool validinput(int x);
    void options();
    bool validinputOptions(int x);
};

#endif // USERINTERFACE_H
