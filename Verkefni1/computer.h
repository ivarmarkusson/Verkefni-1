#ifndef COMPUTER_H
#define COMPUTER_H

#include <QCoreApplication>
#include <string>
using namespace std;

class Computer
{
public:
    Computer();
    Computer(int i, string n, string y, string t, string b);

    //Hér þarf að gera constructor með færibreytum

    int getID_Computer();
    string getName_Computer();
    string getType_Computer();
    string getYearBuilt_Computer();
    string getBuilt_Computer();

    //Set og Get föll fyrir private breytur

    void setID_Computer(int i);
    void setName_Computer(string n);
    void setType_Computer(string t);
    void setYearBuilt_Computer(string y);
    void setBuilt_Computer(string b);
private:
    int c_ID;
    string c_name;
    string c_type;
    string c_yearBuilt;
    string c_built;
    //Þarf að bæta við breytum
};

#endif // COMPUTER_H
