#include "scientist.h"

using namespace std;

Scientist::Scientist()
{

}

Scientist::Scientist(string n, string g, int b, int d)
{
    s_name = n;
    s_gender = g;
    s_birth = b;
    s_death = d;
}

string Scientist::getName_Scientist()
{
    return s_name;
}

string Scientist::getGender_Scientist()
{
    return s_gender;
}

int Scientist::getBirth_Scientist()
{
    return s_birth;
}

int Scientist::getDeath_Scientist()
{
    return s_death;
}

void Scientist::setName_Scientist(string s)
{
    s_name = s;
}

void Scientist::setGender_Scientist(string s)
{
    s_gender = s;
}

void Scientist::setBirth_Scientist(int i)
{
    s_birth = i;
}

void Scientist::setDeath_Scientist(int i)
{
    s_death = i;
}
