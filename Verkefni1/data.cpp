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
    UserInterface obj;
    int input = obj.optionsMenu();

    if(input == 1)
        print();
    else
        search();

}


void Data::print()
{
    UserInterface obj;
    int input = obj.printMenu();

    switch (input)
    {
        case 1:
            printList();
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

void Data::search()
{
    UserInterface obj;
    int input = obj.searchMenu();

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

