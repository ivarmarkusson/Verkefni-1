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
            break;
        case 2:
            temp = SortSci("SELECT * FROM Persons ORDER BY Name DESC");
            break;
        case 3:
            temp = SortSci("SELECT * FROM Persons ORDER BY Gender ASC");
            break;
        case 4:
            temp = SortSci("SELECT * FROM Persons ORDER BY Gender DESC");
            break;
        case 5:
            temp = SortSci("SELECT * FROM Persons ORDER BY Birth ASC");
            break;
        case 6:
            temp = SortSci("SELECT * FROM Persons ORDER BY Birth DESC");
            break;
        case 7:
            temp = SortSci("SELECT * FROM Persons ORDER BY Death ASC");
            break;
        case 8:
            temp = SortSci("SELECT * FROM Persons ORDER BY Death DESC");
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
            temp = SortCom("Select * FROM Computers Order By Name ASC");          
            break;
        case 2:
            temp = SortCom("SELECT * FROM Computers ORDER BY Name DESC");
            break;
        case 3:
            temp = SortCom("SELECT * FROM Computers ORDER BY Type ASC");
            break;
        case 4:
            temp = SortCom("SELECT * FROM Computers ORDER BY Type DESC");
            break;
        case 5:
            temp = SortCom("SELECT * FROM Copmuters ORDER BY Year ASC");
            break;
        case 6:
            temp = SortCom("SELECT * FROM Computers ORDER BY Year DESC");
            break;
        case 7:
            temp = SortCom("SELECT * FROM Computers ORDER BY Built ASC");
            break;
        case 8:
            temp = SortCom("SELECT * FROM Computers ORDER BY Built DESC");
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


    vector<Scientist> temp = searchSci("SELECT * FROM Persons WHERE "
                                       "(Name LIKE '%'||:Name||'%') "
                                       "AND (Birth LIKE '%'||:Birth||'%') "
                                       "AND (Death LIKE '%'||:Death||'%') "
                                       "AND (Gender LIKE '%'||:Gender||'%')");

    printScientistsVector(temp);

    temp.clear();
    scientistVector.clear();
}

void Engine::searchComputers()
{
    vector<Computer> temp = searchCom("SELECT * FROM Computers WHERE "
                                       "(Name LIKE '%'||:Name||'%') "
                                       "AND (Year LIKE '%'||:Year||'%') "
                                       "AND (Type LIKE '%'||:Type||'%') "
                                       "AND (Built LIKE '%'||:Built||'%')");

    printComputersVector(temp);

    temp.clear();
    computerVector.clear();
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
