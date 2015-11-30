#include "data.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

Data::Data()
{

}

/*string findName()
{

    return name;
}*/

void Data::readPerson(const string &filename)
{
    ifstream open_file;

    open_file.open(filename.c_str());

    string next;

    while(open_file >> next)
    {
        getline(open_file, next, '\n');
        nextPerson.push_back(next);
    }

    open_file.close();
}

