#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


class Data
{
    public:
        Data();
        void readPerson(const string &filename);
        void getPersons();

        /*string findName();
        void getName();

        void findGender();
        void getGender();

        void findBirth();
        void getBirth();

        void findDeath();
        void getDeath();*/


    private:
        vector<string> nextPerson;
        string name;
        string gender;
        int birth;
        int death;
};

#endif // DATA_H
