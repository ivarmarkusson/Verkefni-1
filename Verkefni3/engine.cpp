#include "engine.h"
#include <iostream>
#include <QtSql>
#include <string>
#include <vector>
#include "string"
#include "computer.h"
#include "data.h"
#include "scientist.h"
#include "globalstrings.h"

using namespace std;

Engine::Engine()
{

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

    //Needs to return vector to mainWindowClass
    clearComVector();
    temp.clear();
}
/*
void Engine::searchScientists()
{
    vector<Scientist> temp = searchSci(SEARCH_SCIENTIST);

    //Needs to return vector to mainWindowClass

    temp.clear();
    scientistVector.clear();
}
*/
void Engine::searchComputers()
{
    vector<Computer> temp = searchCom(SEARCH_COMPUTER);

    //Needs to return vector to mainWindowClass

    temp.clear();
    computerVector.clear();
}

void Engine::editScientists(int i)
{
    switch(i)
    {
        case 1:
            //AddSci(INSERT_PERSON);
            break;
        case 2:
            //RemoveSci();
            break;
        default:
            cout << "Invalid Input, Try again!" << endl;
            return;
    }

    //Needs to return vector to mainWindowClass

}

void Engine::editComputers(int i)
{
    switch(i)
    {
        case 1:
            //AddCom(INSERT_COMPUTER);
            break;
        case 2:
            //RemoveCom();
            break;
        default:
            cout << "Invalid Input, Try again!" << endl;
            return;
    }

    //Needs to return vector to mainWindowClass
}

void Engine::connectScientistAndComputer(int i)
{
    vector<Connection> temp;

    switch(i)
        {
            case 1:
                temp = viewConnected(PRINT_CONNECTION);
                break;
            case 2:
                //AddConnected(ADD_CONNECTION);
                break;
            default:
                cout << "Invalid Input, Try Again!" << endl;
                break;
        }

    //Needs to return vector to mainWindowClass
    clearConnectVector();
    temp.clear();
}

