#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <string>
using namespace std;

class Scientist
{
public:
    Scientist();
    //Hér þarf að gera constructor með færibreytum
    //Set og Get föll fyrir private breytur
private:
    string s_name;
    string s_gender;
    int s_birth;
    int s_death;
};

#endif // SCIENTIST_H
