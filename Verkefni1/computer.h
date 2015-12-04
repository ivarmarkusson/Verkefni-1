#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
using namespace std;

class Computer
{
public:
    Computer();
    Computer(string n, string t, int y, bool b);
    //Hér þarf að gera constructor með færibreytum
    string getName_Computer();
    string getType_Computer();
    int getYearBuilt_Computer();
    bool getBuilt_Computer();
    //Set og Get föll fyrir private breytur
    void setName_Computer(string n);
    void setType_Computer(string t);
    void setYearBuilt_Computer(int y);
    void setBuilt_Computer(bool b);
private:
    string c_name;
    string c_type;
    int c_yearBuilt;
    bool c_built;
    //Þarf að bæta við breytum
};

#endif // COMPUTER_H
