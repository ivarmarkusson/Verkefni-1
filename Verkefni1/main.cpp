#include <QCoreApplication>
#include <iostream>
#include <string>
#include "data.h"
#include <fstream>
#include "userinterface.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Data nextName;
    UserInterface obj;

    obj.MainMenu();
    obj.options();



    nextName.readPerson("ListOfPeople.txt");



    return a.exec();
}

