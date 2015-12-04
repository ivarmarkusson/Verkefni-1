#include "computer.h"
#include <string>
using namespace std;

Computer::Computer()
{

}

Computer::Computer(string n, string t, int y, bool b)
{
    c_name = n;
    c_type = t;
    c_yearBuilt = y;
    c_built = b;
}

string Computer::getName_Computer()
{
    return c_name;
}

string Computer::getType_Computer()
{
    return c_type;
}

int Computer::getYearBuilt_Computer()
{
    return c_yearBuilt;
}

bool Computer::getBuilt_Computer()
{
    return c_built;
}

void Computer::setName_Computer(string n)
{
    c_name = n;
}

void Computer::setType_Computer(string t)
{
    c_type = t;
}

void Computer::setYearBuilt_Computer(int y)
{
    c_yearBuilt = y;
}

void Computer::setBuilt_Computer(bool b)
{
    c_built = b;
}
