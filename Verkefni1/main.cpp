#include <QCoreApplication>
#include <iostream>
#include <string>
#include "data.h"
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Data nextName;

    nextName.readPerson("ListOfPeople.txt");



    return a.exec();
}

