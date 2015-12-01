#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct Person
{
    string name;
    string gender;
    int birth;
    int death;
};


class Data
{
    public:
        Data();
        void readPerson(const string &filename);
        //void getPersons(vector<string> v);

        /*string findName();
        void getName();

        void findGender();
        void getGender();

        void findBirth();
        void getBirth();

        void findDeath();
        void getDeath();*/


    private:
        vector<Person> nextPerson;
};

#endif // DATA_H
