#include "Pionniers.h"
#include "data.h"
#include <stdlib.h>

Pionniers::Pionniers(string name, string gender, int birth, int death)
{
    Name = name;
    Gender = gender;
    Birth = birth;
    Death = death;

}

istream& operator >> (istream& ins, Pionniers& pionniers )
{
    string name, gender, strBirth, strDeath;
    Person p;

    getline(ins, p.name, '/');
    getline(ins, p.gender, '/');
    getline(ins, strBirth, '/');
    getline(ins, strDeath, '/');

    p.birth = atoi(strBirth.c_str());
    p.death = atoi(strDeath.c_str());

    pionniers.Name =  p.name;
    pionniers.Gender = p.gender;
    pionniers.Birth = p.birth;
    pionniers.Death = p.death;

    return ins;

}

ostream& operator << (ostream& outs, const Pionniers& pionniers)
{
    outs << "Name:          " << pionniers.Name << endl;
    outs << "Gender:        " << pionniers.Gender << endl;
    outs << "Year of birth: " << pionniers.Birth << endl;
    outs << "Year of death: " << pionniers.Death << endl;

    return outs;
}
