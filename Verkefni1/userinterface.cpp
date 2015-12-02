#include "userinterface.h"
#include "data.h"

UserInterface::UserInterface()
{

}

void UserInterface::MainMenu()
{
    int input;

    cout << "--- MAIN MENU ---" << endl;
    cout << "1. Read Current Textfile" << endl;
    cout << "2. Add to Textfle" << endl;

    do
        {
            cin >> input;


            if(!(validinput(input)))
                cout << "Input was not valid, try again" << endl;

        }while(!(validinput(input)));

    system("CLS");

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
        next.readPerson("ListOfPeople.txt");
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

    cout << "--- OPTIONS ---" << endl;
    cout << "1. Print" << endl;
    cout << "2. Search" << endl;
    cout << "3. Back to Main" << endl;

    do
    {
        cin >> input;

        if(!(validinputOptions(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputOptions(input)));

    system("CLS");

    return input;
}

bool UserInterface::validinputOptions(int x)
{
    if(x == 1 || x == 2 || x == 3)
        return true;
    else
        return false;
}

int UserInterface::printMenu()
{
    cout << " --- PRINT LIST --- " << endl;

    cout << "1. Current List" << endl;
    cout << "2. Gender List" << endl;
    cout << "3. Year Of Birth List" << endl;
    cout << "4. Dead" << endl;
    cout << "5. Back to Main" << endl;

    int input;

    do
    {
        cin >> input;

        if(!(validinputPrint(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputPrint(input)));

    system("CLS");

    return input;
}

int UserInterface::searchMenu()
{
    cout << " --- SEARCH --- " << endl;

    cout << "1. By Name" << endl;
    cout << "2. By Year of Birth" << endl;
    cout << "3. By Year of Death" << endl;
    cout << "4. Back to Main" << endl;

    int input;

    do
    {
        cin >> input;

        if(!(validinputSearch(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputSearch(input)));

    system("CLS");

    return input;
}

bool UserInterface::validinputSearch(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4)
        return true;
    else
        return false;
}

bool UserInterface::validinputPrint(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
        return true;
    else
        return false;
}
