#include "ui.h"
#include "engine.h"
#include <iostream>
#include <stdlib.h>
#include <ostream>
#include "scientist.h"
#include "computer.h"
#include <vector>
#include "data.h"
using namespace std;

UI::UI()
{

}

//Starts Runnig the Program
void UI::startProgram()
{
    mainMenu();
    int input = userInput();
    system("cls");

    switch(input)
    {
        case 1:
            //Birtir Tölvunarfræðinga
            displayScientistsMenu();
            input = userInput();
            system("cls");
            sortSientists(input);
            runAgain();
            break;
        case 2:
            //Birtir Tölvur
            displayComputersMenu();
            input = userInput();
            system("cls");
            sortComputers(input);
            runAgain();
            break;
        case 3:
            //Edit Scientists
            editScientistsMenu();
            input = userInput();
            system("cls");
            editScientists(input);
            runAgain();
            break;
        case 4:
            //Edit Computer

            editComputersMenu();
            input = userInput();
            system("cls");
            editComputers(input);
            runAgain();
            break;
        case 5:
            searchScientists();
            runAgain();
            break;
        case 6:
            searchComputers();
            runAgain();
            break;
        case 7:
            connectionMenu();
            input = userInput();
            connectScientistAndComputer(input);
            runAgain();
            break;
        case 8:
             exit(1);
             break;
        default:
            cout << "Invaldi Input, Try Again!" << endl;
            startProgram();

    }
}

void UI::mainMenu()
{
    cout << "     --- *** <WELCOME> *** --- " << endl;
    cout << endl;
    cout << "DATABASE FOR SCIENTISTS AND COMPUTERS" << endl;
    cout << endl;
    cout << "Here are your options: \n";
    cout << endl;
    cout << "1. Display Scientists. \n";
    cout << "2. Display Computers. \n";
    cout << "3. Edit Scientist. \n";
    cout << "4. Edit Computer. \n";
    cout << "5. Search Scientists. \n";
    cout << "6. Search Computers. \n";
    cout << "7. Connection Between Computers and Scientists. \n";
    cout << "8. Quit Program. \n";
}

void UI::displayScientistsMenu()
{
    cout << "HOW DO YOU WANT TO DISPLAY THE LIST" << endl << endl;
    cout << "1. Name in Ascending Order" << endl;
    cout << "2. Name in Descending Order" << endl;
    cout << "3. Gender in Ascending Order" << endl;
    cout << "4. Gender in Descending Order" << endl;
    cout << "5. Year of Birth in Ascending Order" << endl;
    cout << "6. Year of Birth in Descending Order" << endl;
    cout << "7. Year of Death in Ascending Order" << endl;
    cout << "8. Year of Death in Descending Order" << endl;
}

void UI::displayComputersMenu()
{
    cout << "HOW DO YOU WANT TO DISPLAY THE LIST" << endl << endl;
    cout << "1. Name in Ascending Order" << endl;
    cout << "2. Name in Descending Order" << endl;
    cout << "3. Type in Ascending Order" << endl;
    cout << "4. Type in Descending Order" << endl;
    cout << "5. Year Built in Ascending Order" << endl;
    cout << "6. Year Built in Descending Order" << endl;
    cout << "7. Built in Ascending Order" << endl;
    cout << "8. Built in Descending Order" << endl;
}

void UI::editScientistsMenu()
{
    cout << "EDIT COMPUTERSCIENTISTS" << endl << endl;
    cout << "1. Add ComputerScientist." << endl;
    cout << "2. Remove ComputerScientist." << endl;
}

void UI::editComputersMenu()
{
    cout << "EDIT COMPUTERS" << endl << endl;
    cout << "1. Add Computer." << endl;
    cout << "2. Remove Computer." << endl;
}

void UI::connectionMenu()
{
    cout << "1. View Connections." << endl;
    cout << "2. Add Connection." << endl;
}

void UI::runAgain()
{
    string input;

    cout << endl << endl;
    cout << "Do You Want To Go Back To Start(Yes/No): ";

    do
    {
        cin >> input;
        if(input != "yes" && input != "Yes" && input != "no" && input != "No")
        {
            cout << "Invalid Input, Try Again!" << endl;
        }
    }while(input != "yes" && input != "Yes" && input != "no" && input != "No");

    system("cls");

    if(input == "Yes" || input == "yes")
    {
        startProgram();
    }
    else
    {
        exit(1);
    }
}



