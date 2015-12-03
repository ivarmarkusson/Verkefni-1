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
    int optionsMenu();
    bool validinputOptionsAndMainMenu(int x);
    void print();
    int searchMenu();
    bool validinputSearch(int x);
    int printMenu();
    bool validinputPrint(int x);
    void printTableText();
    int OrderMenu();
    bool validinputOrder(int x);
};

#endif // USERINTERFACE_H
