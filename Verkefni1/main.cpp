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

    UserInterface obj;

    obj.MainMenu();

    return a.exec();
}

