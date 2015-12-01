#include "data.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

Data::Data()
{

}
/*void Data::getPersons(vector<string> v)
{
    v = nextPerson;
}

string findName()
{

    return name;
}*/

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


