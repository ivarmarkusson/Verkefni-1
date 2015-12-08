#ifndef UI_H
#define UI_H

#include <QCoreApplication>
#include "engine.h"
#include <iomanip>
//#include <conio.h>

class UI:Engine
{

public:
    UI();
    void startProgram();
    //Starts Runnig the Program

    void mainMenu();
    //Main Menu

    void runAgain();
    //Checks if you want to continue running the program.

    void displayScientistsMenu();
    void displayComputersMenu();
    //Displays menus for Scientists and Computers

    void editScientistsMenu();
    void editComputersMenu();
    //Displays Edit Menu For Scientists and Computers


};

#endif // UI_H
