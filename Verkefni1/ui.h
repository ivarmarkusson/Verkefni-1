#ifndef UI_H
#define UI_H

#include "engine.h"

class UI
{

public:
    UI();
    void startProgram(); //Starts Runnig the Program
    void mainMenu(); //Main Menu
    void scientistMenu(int i);

    void displayScientistsMenu();
    void displayComputersMenu();

    void editScientistsMenu();
    void editComputersMenu();

    void printSciVector(vector<Scientist> sci);

    Engine e_obj;
};

#endif // UI_H
