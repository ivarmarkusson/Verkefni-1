#include "engine.h"
#include <iostream>
#include <QtSql>
#include <string>
#include <vector>
#include "string"
#include "computer.h"
#include "data.h"
#include "scientist.h"
#include "ui.h"

using namespace std;

Engine::Engine()
{

}

int Engine::userInput()
{
    int i;
    cin >> i;
    cin.ignore();
    return i;
}

void Engine::sortSientists(int i)
{
    vector<Scientist> temp;

    switch (i) {
        case 1:
            temp = SortSci("Select * FROM Persons Order By Name ASC");
            printScientistsVector(temp);
            break;
        case 2:
            temp = SortSci("SELECT * FROM Persons ORDER BY Name DESC");
            printScientistsVector(temp);
            break;
        case 3:
            temp = SortSci("SELECT * FROM Persons ORDER BY Gender ASC");
            printScientistsVector(temp);
            break;
        case 4:
            temp = SortSci("SELECT * FROM Persons ORDER BY Gender DESC");
            printScientistsVector(temp);
            break;
        case 5:
            temp = SortSci("SELECT * FROM Persons ORDER BY Birth ASC");
            printScientistsVector(temp);
            break;
        case 6:
            temp = SortSci("SELECT * FROM Persons ORDER BY Birth DESC");
            printScientistsVector(temp);
            break;
        case 7:
            temp = SortSci("SELECT * FROM Persons ORDER BY Death ASC");
            printScientistsVector(temp);
            break;
        case 8:
            temp = SortSci("SELECT * FROM Persons ORDER BY Death DESC");
            printScientistsVector(temp);
            break;
        default:
            //Hér þarf að koma villuskilaboð og notandi að fá að velja aftur
            break;
        }

    clearSciVector();
    temp.clear();
    close();
}

void Engine::sortComputers(int i)
{
    vector<Computer> temp;

    switch (i) {
        case 1:
            temp = SortCom("Select * FROM Computers Order By Name ASC");
            printComputersVector(temp);
            break;
        case 2:
            temp = SortCom("SELECT * FROM Computers ORDER BY Name DESC");
            printComputersVector(temp);
            break;
        case 3:
            temp = SortCom("SELECT * FROM Computers ORDER BY Type ASC");
            printComputersVector(temp);
            break;
        case 4:
            temp = SortCom("SELECT * FROM Computers ORDER BY Type DESC");
            printComputersVector(temp);
            break;
        case 5:
            temp = SortCom("SELECT * FROM Copmuters ORDER BY Year ASC");
            printComputersVector(temp);
            break;
        case 6:
            temp = SortCom("SELECT * FROM Computers ORDER BY Year DESC");
            printComputersVector(temp);
            break;
        case 7:
            temp = SortCom("SELECT * FROM Computers ORDER BY Built ASC");
            printComputersVector(temp);
            break;
        case 8:
            temp = SortCom("SELECT * FROM Computers ORDER BY Built DESC");
            printComputersVector(temp);
            break;
        default:
            //Hér þarf að koma villuskilaboð og notandi að fá að velja aftur
            break;
        }

    clearComVector();
    temp.clear();
    close();
}

/*
void Engine::editScientists(int i)
{
    bool temp = false;

    switch (i) {
        case 1:
            temp = EditSci("INSERT INTO Persons (Name, ");

            break;
        case 2:
            break;
    }
}
*/
//PRINT FUNCTIONS TO PRINT VECTORS

void Engine::printScientistsVector(vector<Scientist> sci)
{
    //e-ð spes með gender breytuna stundum fer hun í næstu línu

    cout << setw(15) << left << "ID." << setw(20) << left << "Name" << setw(20)
         << left << "Year of birth" << setw(20) << left << "Year of death"
         << setw(20) << left << "Gender" << endl;

    cout << setfill ('-') << setw(85)<< "-" << endl;
    cout << setfill(' ');

    for(unsigned int i = 0; i < sci.size(); i++)
    {
        cout << setw(10) << left << sci.at(i).getID_Scientist()
             << setw(30) << left << sci.at(i).getName_Scientist()
             << setw(15) << left << sci.at(i).getBirth_Scientist()
             << setw(10) << right << sci.at(i).getDeath_Scientist()
             << setw(15) << right << sci.at(i).getGender_Scientist()
             << endl;
    }
}

void Engine::printComputersVector(vector<Computer> comp)
{

    cout << " " <<setw(15) << left  << "ID." << setw(25) << left << "Name"
         << setw(20) << left << "Year Built" << setw(18) << left << "Type"
         << setw(18) << left << "Built" << endl;

    cout << setfill ('-') << setw(90)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < comp.size(); i++)
    {
        cout << " "
             << setw(5) << left << comp.at(i).getID_Computer()
             << setw(37) << left << comp.at(i).getName_Computer()
             << setw(15) << left << comp.at(i).getYearBuilt_Computer()
             << setw(10) << right << comp.at(i).getType_Computer()
             << setw(15) << right << comp.at(i).getBuilt_Computer()
             << endl;
    }
}

