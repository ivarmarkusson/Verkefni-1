#include "ui.h"
#include "engine.h"
#include <iostream>
#include <stdlib.h>
#include <ostream>
#include "scientist.h"
#include <vector>
#include "data.h"
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
            scientistMenu(input);
            //þar sem hvert case framkvæmir hverja skipun

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
            //Edit Scientists

            editScientistsMenu();
            input =e_obj.userInput();
            if(input == 1)
            {
                //hérna á að koma fall sem bætir
                // við scientist
            }
            else if(input == 2)
            {
                //Hér á að koma fall sem eyðir
                //scientist
            }
            system("cls");
            startProgram();
            break;
        case 4:
            //Edit Computer

            editComputersMenu();
            input =e_obj.userInput();
            if(input == 1)
            {
                //hérna á að koma fall sem bætir
                // við scientist
                //e_obj.sqlAddComputer();
            }
            else if(input == 2)
            {
                //Hér á að koma fall sem eyðir
                //Computer
            }
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
    cout << "3. Edit Scientist. \n";
    cout << "4. Edit Computer. \n";
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

void UI::scientistMenu(int i)
{
    switch (i)
    {
        case 1:
            e_obj.readAscSciDatabase();
            printSciVector(e_obj.readAscSciDatabase());
            break;
        case 2:

            break;
    }
}

void UI::printSciVector(vector<Scientist> sci)
{
    for(unsigned int i = 0; i < sci.size(); i++)
    {
        cout << "ID: " << sci.at(i).getID_Scientist() << endl;
        cout << "Name: " << sci.at(i).getName_Scientist() << endl;
        cout << "Birth: " << sci.at(i).getBirth_Scientist() << endl;
        cout << "Death: " << sci.at(i).getDeath_Scientist() << endl;
        cout << "Gender: " << sci.at(i).getGender_Scientist() << endl;
    }
}


