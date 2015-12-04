#ifndef UI_H
#define UI_H

#include "engine.h"

class UI
{
public:
    UI();
    void startProgram(); //Starts Runnig the Program
    void mainMenu(); //Main Menu
    void displaySciMenu();
    void displayComMenu();

    Engine e_obj;
};

#endif // UI_H
