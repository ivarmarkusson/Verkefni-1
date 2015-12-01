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
