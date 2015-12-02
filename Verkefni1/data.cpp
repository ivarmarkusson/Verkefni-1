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


}

void Data::addToList(const string &filename)
{
    string addPerson;

    cout << endl;
    cout << "Enter name/gender/year-of-birth/year-of-death" << endl;
    cout << "Enter 0 in year-of-death if still alive" << endl;
    cin >> addPerson;

    system("CLS");

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
    else if(input == 2)
        search();
    else
        obj.MainMenu();


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
            printGender();
            break;
        case 3:
            //raða eftir aldri
            break;
        case 4:
            printDead();
            break;
        case 5:
            obj.MainMenu();
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
            searchName();
            break;
        case 2:
            searchBirth();
            break;
        case 3:
            searchDeathYear();
            break;
        case 4:
            obj.MainMenu();
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
    }
}

void Data::printGender()
{
    cout << setw(50) << " --- FEMALES --- "  << endl;
    cout << endl;

    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        if(nextPerson.at(i).gender == "female")
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
                 setw(15)<< nextPerson.at(i).death << endl;
        }
    }

    cout << setw(50) << " --- MALES --- "  << endl;
    cout << endl;

    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        if(nextPerson.at(i).gender == "male")
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
                 setw(15)<< nextPerson.at(i).death << endl;
        }
    }
}

void Data::printAge()
{

}

void Data::printDead()
{
    cout << endl;
    cout << setw(55) <<  "--- LIST OF DEAD PEOPLE ---" << endl ;
    cout << endl;
    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        if (nextPerson.at(i).death > 0)
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
            setw(15)<< nextPerson.at(i).death << endl;
        }
    }
}

void Data::searchName()
{
    string n;
    cout << endl;
    cout << "Enter name: ";
    cin >> n;
    cout << endl;

    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        string name = nextPerson.at(i).name ;
        if (name.find(n) != string::npos)
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
            setw(15)<< nextPerson.at(i).death << endl;

        }
    }
}

void Data::searchDeathYear()
{
    int d;
    cout << endl;
    cout << "Enter year of death: ";
    cin >> d;

    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        if (nextPerson.at(i).death == d)
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
            setw(15)<< nextPerson.at(i).death << endl;

        }
    }

}


void Data::searchBirth()
{
    int b;
    cout << endl;
    cout << "Enter Year of birth: ";
    cin >> b;
    cout << endl;

    cout << setw(10)<< "Name" << setw(20) << "Gender" << setw(25) << "Year of birth" << setw(25) << "Year of death" << endl;
    cout << setfill ('-') << setw(82)<< "-"<< setfill(' ' ) <<endl;

    for(unsigned int i = 0; i < nextPerson.size(); i++)
    {
        if(nextPerson.at(i).birth == b)
        {
            cout << left << setw(25)<<  nextPerson.at(i).name << setw(22) << nextPerson.at(i).gender << setw(15)<< nextPerson.at(i).birth << right <<
            setw(15)<< nextPerson.at(i).death << endl;
        }
    }


}

