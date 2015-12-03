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
    cout << "2. Add to Textfile" << endl;
    cout << "3. Reorder Textfile" << endl;

    do
        {
            cin >> input;


            if(!(validinputOptionsAndMainMenu(input)))
                cout << "Input was not valid, try again" << endl;

        }while(!(validinputOptionsAndMainMenu(input)));

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
    else if(input == 3)
        {
            Data next;
            next.readPerson("ListOfPeople.txt");
            next.Order();
        }


}

bool UserInterface::validinputOptionsAndMainMenu(int x)
{
    if(x == 1 || x == 2 || x == 3)
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

        if(!(validinputOptionsAndMainMenu(input)))
            cout << "Input was not valid, try again" << endl;

    }while(!(validinputOptionsAndMainMenu(input)));

    system("CLS");

    return input;
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

void UserInterface::printTableText()
{
    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25)
         << "Year of birth" << setw(25) << "Year of death" << endl;

    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;
}

int UserInterface::OrderMenu()
{
    cout << " --- CHANGE ORDER --- " << endl;

    cout << "1. Name in Ascending Order" << endl;
    cout << "2. Name in Descending Order" << endl;
    cout << "3. Year of Birth in Ascending Order" << endl;
    cout << "4. Year of Birth in Descending Order" << endl;
    cout << "5. Year of Death in Ascending Order" << endl;
    cout << "6. Year of Death in Descending Order" << endl;

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

bool UserInterface::validinputOrder(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5 || x == 6)
        return true;
    else
        return false;
}


