#ifndef UI_H
#define UI_H

#include <QCoreApplication>
#include "engine.h"

class UI
{

public:
    UI();
    void startProgram(); //Starts Runnig the Program
    void mainMenu(); //Main Menu
    void runAgain(); //Checks if you want to continue running the program.

    void displayScientistExecution(int i);
    void displayComputersExecution(int i);

    void displayScientistsMenu();
    void displayComputersMenu();

    void editScientistsMenu();
    void editComputersMenu();

    void printScientistsVector(vector<Scientist> sci);
    void printComputersVector(vector<Computer> sci);

    Engine e_obj;
    Data d_obj;
};

#endif // UI_H
