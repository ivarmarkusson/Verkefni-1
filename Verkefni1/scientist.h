#ifndef SCIENTIST_H
#define SCIENTIST_H

#include <string>
using namespace std;

class Scientist
{
public:
    Scientist();
    Scientist(string n, string g, int b, int d);
    //Hér þarf að gera constructor með færibreytum
    string getName_Scientist();
    string getGender_Scientist();
    int getBirth_Scientist();
    int getDeath_Scientist();
    //Set og Get föll fyrir private breytur
    void setName_Scientist(string s);
    void setGender_Scientist(string s);
    void setBirth_Scientist(int i);
    void setDeath_Scientist(int i);
private:
    string s_name;
    string s_gender;
    int s_birth;
    int s_death;
};

#endif // SCIENTIST_H
