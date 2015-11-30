#include "userinterface.h"

UserInterface::UserInterface()
{

}

void UserInterface::MainMenu()
{
    int input;

    cout << "--- Choose ---" << endl;
    cout << "1. Current list" << endl;
    cout << "2. Add to list" << endl;

    do
    {
        cin >> input;

        if(!(validinput(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinput(input)));

}

bool UserInterface::validinput(int x)
{
    if(x == 1 || x == 2)
        return true;
    else
        return false;
}

void UserInterface::options()
{
    int input;

    cout << "--- Options ---" << endl;
    cout << "1. Show by name" << endl;
    cout << "2. Show by gender" << endl;
    cout << "3. Show by birthyear" << endl;
    cout << "4. Show by year of death" << endl;

    do
    {
        cin >> input;

        if(!(validinputOptions(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputOptions(input)));

}

bool UserInterface::validinputOptions(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4)
        return true;
    else
        return false;
}
