#include "data.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include "scientist.h"


using namespace std;

Data::Data()
{

}

vector<Computer> Data::getComputerVector()
{
    return computerVector;
}

vector<Scientist> Data::getSciVector()
{
    return scientistVector;
}
