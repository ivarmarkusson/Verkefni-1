#include "userinterface.h"
#include "data.h"

UserInterface::UserInterface()
{

}

void UserInterface::MainMenu()
{
    int input;

    cout << "--- Choose ---" << endl;
    cout << "1. Read Current Textfile" << endl;
    cout << "2. Add to Textfie" << endl;

    do
        {
            cin >> input;


            if(!(validinput(input)))
                cout << "Input was not valid, try again" << endl;

        }while(!(validinput(input)));

    if(input == 1)
    {
        Data next;
        next.readPerson("ListOfPeople.txt");
        next.options();
    }
    else if(input == 2)
    {
        Data next;
        next.addToList("ListOfPeople.txt");
        next.options();
    }

}

bool UserInterface::validinput(int x)
{
    if(x == 1 || x == 2)
        return true;
    else
        return false;
}

int UserInterface::optionsMenu()
{
    int input;

    cout << "--- Options ---" << endl;
    cout << "1. Print" << endl;
    cout << "2. Search" << endl;

    do
    {
        cin >> input;

        if(!(validinputOptions(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputOptions(input)));

    return input;
}

bool UserInterface::validinputOptions(int x)
{
    if(x == 1 || x == 2)
        return true;
    else
        return false;
}

int UserInterface::printMenu()
{
    cout << " --- PRINT --- " << endl;

    cout << "1. Current List" << endl;
    cout << "2. By gender" << endl;
    cout << "3. By Age " << endl;
    cout << "4. Dead" << endl;

    int input;

    do
    {
        cin >> input;

        if(!(validinputPrintAndSearch(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputPrintAndSearch(input)));

    return input;
}

int UserInterface::searchMenu()
{
    cout << " --- SEARCH --- " << endl;

    cout << "1. By Name" << endl;
    cout << "2. By Gender" << endl;
    cout << "3. By Year of Birth" << endl;
    cout << "4. By Year of Death" << endl;

    int input;

    do
    {
        cin >> input;

        if(!(validinputPrintAndSearch(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputPrintAndSearch(input)));

    return input;
}

bool UserInterface::validinputPrintAndSearch(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4)
        return true;
    else
        return false;
}
