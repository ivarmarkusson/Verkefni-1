#ifndef PIONNIERS_H
#define PIONNIERS_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Pionniers
{
public:
    Pionniers(string name, string gender, int birth, int death);
    friend istream& operator >> (istream& ins, Pionniers& pionniers);
    friend ostream& operator << (ostream& outs, const Pionniers& pionniers);
private:
    string Name;
    string Gender;
    int Birth;
    int Death;
};

#endif // PIONNIERS_H
