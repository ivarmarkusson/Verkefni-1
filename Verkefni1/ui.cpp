#include "ui.h"
#include "engine.h"
#include <iostream>
#include <stdlib.h>
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
    system("cls");

    switch(input)
    {
        case 1:
            //Birtir Tölvunarfræðinga
            displayScientistsMenu();
            input = e_obj.userInput();
            //Hér vantar fall sem er með switch
            //þar sem hvert case framkvæmir hverja skipun
            system("cls"); // Þarf að útfæra betur
            startProgram();
            break;
        case 2:
            //Birtir Tölvur
            displayComputersMenu();
            input = e_obj.userInput();
            //Hér vantar fall sem er með switch
            //þar sem hvert case framkvæmir hverja skipun
            system("cls"); // Þarf að útfæra betur
            startProgram();
            break;
        case 3:
            //Add Scientists
            //Vantar fall, það á að koma hér <-
            system("cls");
            startProgram();
            break;
        case 4:
            //Add Computer
            e_obj.sqlAddComputer();
            //Fallið er tómt
            system("cls");
            startProgram();
            break;
        case 5:
            //Search Scientists
            //Vantar fall, það á að koma hér <-
            system("cls");
            startProgram();
            break;
        case 6:
            //Search Computers
            //Vantar fall, það á að koma hér <-
            system("cls");
            startProgram();
            break;
        case 7:
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
    cout << "3. Add Scientist. \n";
    cout << "4. Add Computer. \n";
    cout << "5. Search Scientists. \n";
    cout << "6. Search Computers. \n";
    cout << "7. Quit Program. \n";
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










