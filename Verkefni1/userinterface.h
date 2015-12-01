#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <iostream>
#include <vector>
#include "data.h"
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class UserInterface
{
public:
    UserInterface();

    void MainMenu();
    bool validinput(int x);
    int optionsMenu();
    bool validinputOptions(int x);
    void print();
    int searchMenu();
    bool validinputSearch(int x);
    int printMenu();
    bool validinputPrint(int x);
};

#endif // USERINTERFACE_H
