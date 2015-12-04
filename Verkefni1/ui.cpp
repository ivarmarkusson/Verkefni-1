#include "ui.h"
#include "engine.h"
#include <iostream>
using namespace std;

UI::UI()
{

}

//Starts Runnig the Program
void UI::startProgram()
{
    //Her gæti verið fall í Engine klasa
    //sem keyrir SQL stuffið i gang

    mainMenu();
    int input = e_obj.userInput();

    switch(input)
    {
        case 1:
            displaySciMenu();
            break;
        case 2:
            displayComMenu();
            break;

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
}

void UI::displaySciMenu()
{
    cout << "1. Name in Ascending Order" << endl;
    cout << "2. Name in Descending Order" << endl;
    cout << "3. Year of Birth in Ascending Order" << endl;
    cout << "4. Year of Birth in Descending Order" << endl;
    cout << "5. Year of Death in Ascending Order" << endl;
    cout << "6. Year of Death in Descending Order" << endl;
}

void UI::displayComMenu()
{
    cout << "1. Name in Ascending Order" << endl;
    cout << "2. Name in Descending Order" << endl;
}










