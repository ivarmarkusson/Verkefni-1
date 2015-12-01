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

    while ( !file.eof() )
    {
        //Read line into string
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

    cout << nextPerson.size();
}

void Data::addToList(const string &filename)
{
    string addPerson;

    cout << "Enter name/gender/year-of-birth/year-of-death" << endl;
    cout << "Enter 0 in year-of-death if still alive" << endl;
    cin >> addPerson;

    ofstream input_file;
    input_file.open(filename.c_str(),std::ios::app|std::ios::out);


    input_file << "\n" << addPerson;

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
    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
             setw(15)<< nextPerson.at(i).death << endl;
        //cout << endl;
    }
}

