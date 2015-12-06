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
            displayScientistExecution(input);
            startProgram();
            break;
        case 2:
            //Birtir Tölvur
            displayComputersMenu();
            input = e_obj.userInput();
            displayComputersExecution(input);
            system("cls"); // Þarf að útfæra betur
            startProgram();
            break;
        case 3:
            //Edit Scientists

            editScientistsMenu();
            input =e_obj.userInput();
            if(input == 1)
            {
                //ADD SCIENTIST
                //hérna á að koma fall sem bætir
                // við scientist
            }
            else if(input == 2)
            {
                //REMOVE SCIENTIST
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
                //ADD COMPUTER
                //hérna á að koma fall sem bætir
                // við Computer
                //e_obj.sqlAddComputer();
            }
            else if(input == 2)
            {
                //REMOVE COMPUTER
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

void UI::displayScientistExecution(int i)
{
    switch (i)
    {
        case 1:
            e_obj.readAscSciDatabase();
            printScientistsVector(e_obj.readAscSciDatabase());
            break;
        case 2:
            //Hér á að koma fall sem byrtir nöfn
            //Scientists í öfugri röð(Descending)
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 3:
            //Hér á að koma fall sem byrtir kyn
            //Scientists í Ascending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 4:
            //Hér á að koma fall sem byrtir kyn
            //Scientists í descending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 5:
            //Hér á að koma fall sem byrtir fæðingar ár
            //Í Ascending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 6:
            //Hér á að koma fall sem byrtir fæðingar ár
            //Í Descending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 7:
            //Hér á að koma fall sem byrtir dánar ár
            //Í Ascending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        case 8:
            //Hér á að koma fall sem byrtir dánar ár
            //Í Descending Order
            //Þetta eru tvö föll annað raðar hitt prentar
            printScientistsVector(d_obj.getSciVector());
            break;
        default:
            cout << "Invalid Input, Try Again!" << endl;
            startProgram();
            break;
    }
}

void UI::displayComputersExecution(int i)
{
    switch (i)
    {
        case 1:
            //Hér á að koma fall sem raðar
            //Nöfnum í Computers Í Ascending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 2:
            //Hér á að koma fall sem raðar
            //Nöfnum í Computers Í Descending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 3:
            //Hér á að koma fall sem raðar
            //Type í Computers Í Ascending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 4:
            //Hér á að koma fall sem raðar
            //Type í Computers Í Descending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 5:
            //Hér á að koma fall sem raðar
            //Year built í Computers Í Ascending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 6:
            //Hér á að koma fall sem raðar
            //Year built í Computers Í Descending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 7:
            //Hér á að koma fall sem raðar
            //Built í Computers Í Ascending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        case 8:
            //Hér á að koma fall sem raðar
            //Built í Computers Í Ascending Order
            printComputersVector(d_obj.getComputerVector());
            //Og annað hér sem prentar Computers
            break;
        default:
            cout << "Invalid Input, Try Again!" << endl;
            startProgram();
            break;
    }
}


void UI::printScientistsVector(vector<Scientist> sci)
{
    //Það á eftir að nota setwid til þess að fá bil á milli
    cout << "Id" << "Name" << "Birth Year" << "Year of Death" << "Gender" << endl
         << "------------------------------------------";
    for(unsigned int i = 0; i < sci.size(); i++)
    {
        cout << sci.at(i).getID_Scientist()
             << sci.at(i).getName_Scientist()
             << sci.at(i).getBirth_Scientist()
             << sci.at(i).getDeath_Scientist()
             << sci.at(i).getGender_Scientist() << endl;
    }
}

void UI::printComputersVector(vector<Computer> comp)
{
    //Sjá fallið printscientistsVector
    //Þarf að hafa þetta fall á sama formati :)
    cout << "Id" << "Name" << "Year Built" << "Type" << "Built" << endl
         << "------------------------------------------";
    for(unsigned int i = 0; i < comp.size(); i++)
    {
        cout << "ID: " << comp.at(i).getID_Computer() << endl;
        cout << "Name: " << comp.at(i).getName_Computer() << endl;
        cout << "Year Built: " << comp.at(i).getYearBuilt_Computer() << endl;
        cout << "Type: " << comp.at(i).getType_Computer() << endl;
        cout << "Built: " << comp.at(i).getBuilt_Computer() << endl;
    }
}


