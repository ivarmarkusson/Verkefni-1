#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "scientist.h"
#include "computer.h"

using namespace std;

class Data
{
    public:
        Data();
        // Er ekki alveg búinn að sjá hvað kemur hér
        // En vectorarnir í private eiga að vera




    private:
        vector<Scientist> scientist;
        vector<Computer> computer;
};

#endif // DATA_H
