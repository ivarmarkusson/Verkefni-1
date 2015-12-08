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
#include "globalstrings.h"

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
            temp = SortSci(SCI_ORDER_BY_NAME_ASC);
            break;
        case 2:
            temp = SortSci(SCI_ORDER_BY_NAME_DESC);
            break;
        case 3:
            temp = SortSci(SCI_ORDER_BY_GENDER_ASC);
            break;
        case 4:
            temp = SortSci(SCI_ORDER_BY_GENDER_DESC);
            break;
        case 5:
            temp = SortSci(SCI_ORDER_BY_BIRTH_ASC);
            break;
        case 6:
            temp = SortSci(SCI_ORDER_BY_BIRTH_DESC);
            break;
        case 7:
            temp = SortSci(SCI_ORDER_BY_DEATH_ASC);
            break;
        case 8:
            temp = SortSci(SCI_ORDER_BY_DEATH_DESC);
            break;
        default:
            cout << "Invalid Input! Try Again!" << endl;
            return;
            break;
        }
    printScientistsVector(temp);
    clearSciVector();
    temp.clear();
}

void Engine::sortComputers(int i)
{
    vector<Computer> temp;

    switch (i) {
        case 1:
            temp = SortCom(COM_ORDER_BY_NAME_ASC);
            break;
        case 2:
            temp = SortCom(COM_ORDER_BY_NAME_DESC);
            break;
        case 3:
            temp = SortCom(COM_ORDER_BY_TYPE_ASC);
            break;
        case 4:
            temp = SortCom(COM_ORDER_BY_TYPE_DESC);
            break;
        case 5:
            temp = SortCom(COM_ORDER_BY_YEAR_ASC);
            break;
        case 6:
            temp = SortCom(COM_ORDER_BY_YEAR_DESC);
            break;
        case 7:
            temp = SortCom(COM_ORDER_BY_BUILT_ASC);
            break;
        case 8:
            temp = SortCom(COM_ORDER_BY_BUILT_DESC);
            break;
        default:
            cout << "Invalid Input! Try Again!" << endl;
            return;
            break;
        }

    printComputersVector(temp);
    clearComVector();
    temp.clear();
}

void Engine::searchScientists()
{


    vector<Scientist> temp = searchSci(SEARCH_SCIENTIST);

    printScientistsVector(temp);

    temp.clear();
    scientistVector.clear();
}

void Engine::searchComputers()
{
    vector<Computer> temp = searchCom(SEARCH_COMPUTER);

    printComputersVector(temp);

    temp.clear();
    computerVector.clear();
}

void Engine::editScientists(int i)
{
    switch(i)
    {
        case 1:
            AddSci(INSERT_PERSON);
            break;
        case 2:
            RemoveSci("UPDATE persons SET Hide = 'true' WHERE ID = tempId");
            break;
        default:
            cout << "Invalid Input, Try again!" << endl;
            return;
    }

}

void Engine::editComputers(int i)
{
    switch(i)
    {
        case 1:
            AddCom(INSERT_COMPUTER);
            break;
        case 2:
            RemoveCom("str");
            break;
        default:
            cout << "Invalid Input, Try again!" << endl;
            return;
    }

}

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
