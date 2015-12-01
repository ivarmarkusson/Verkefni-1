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
    cout << "3. Open Options Menu" << endl;

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
        MainMenu();
    }
    else if(input == 2)
    {
        Data next;
        next.addToList("ListOfPeople.txt");
        MainMenu();
    }
    else if(input == 3)
    {
        options();
    }


}

bool UserInterface::validinput(int x)
{
    if(x == 1 || x == 2 || x == 3)
        return true;
    else
        return false;
}

void UserInterface::options()
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

    if(input == 1)
        print();
    else
        search();


}

bool UserInterface::validinputOptions(int x)
{
    if(x == 1 || x == 2)
        return true;
    else
        return false;
}

void UserInterface::print()
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

    switch (input)
    {
        case 1:
            //prenta listan eins og er
            break;
        case 2:
            //raða eftir kyni
            break;
        case 3:
            //raða eftir aldri
            break;
        case 4:
            //er aðilin á lífi eða dauður
            break;
    }


}

void UserInterface::search()
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

    switch (input)
    {
        case 1:
            //leita af nafni
            break;
        case 2:
            //leita af kyni
            break;
        case 3:
            //leita af fæðingar ári
            break;
        case 4:
            //leita af dánar ári
            break;
    }
}

bool UserInterface::validinputPrintAndSearch(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4)
        return true;
    else
        return false;
}
