#include "data.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "userinterface.h"

using namespace std;

Data::Data()
{

}

void Data::readPerson(const string &ListOfPeople)
{
    string strBirth, strDeath;

    ifstream file;
    file.open(ListOfPeople.c_str());

    Person p;
    string next;
    string temp;
    stringstream convert;

    while ( !( file>>next).eof() )
    {
        //Read line into string
        //getline(file, next, '\n');
        getline(file, p.name, '/');
        getline(file, p.gender, '/');
        getline(file, strBirth, '/');
        getline(file, strDeath);
        //breyta strBirth og strDeath yfir i int
        p.birth = atoi(strBirth.c_str());
        p.death = atoi(strDeath.c_str());

        nextPerson.push_back(p);
    }
    file.close();
}

void Data::addToList(const string &filename)
{
    string addPerson;

    cout << "Enter name/gender/year-of-birth/year-of-death" << endl;
    cout << "Enter 0 in year-of-death if still alive" << endl;
    cin >> addPerson;

    ofstream input_file;
    input_file.open(filename.c_str(),std::ios::app);

    input_file << addPerson;

    input_file.close();
}

void Data::options()
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
    {

        print();
    }
    else
    {

        search();
    }


}

bool Data::validinputOptions(int x)
{
    if(x == 1 || x == 2)
        return true;
    else
        return false;
}

void Data::print()
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

    if(input == 1)
    {
        printList();
    }

    /*
    switch (input)
    {
        case 1:
            Data obj;
            obj.printList();
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
    */

}

void Data::search()
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

bool Data::validinputPrintAndSearch(int x)
{
    if(x == 1 || x == 2 || x == 3 || x == 4)
        return true;
    else
        return false;
}

void Data::printList()
{

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        cout << "Name: " << nextPerson.at(i).name << endl;
        cout << "Gender: " << nextPerson.at(i).gender << endl;
        cout << "Birthyear: " << nextPerson.at(i).birth << endl;
        cout << "Deathyear: " << nextPerson.at(i).death << endl;
        cout << endl;
    }
}

