#include "mainwindow.h"
#include <QApplication>
#include "data.h"
#include "engine.h"
#include <QtSql>

using namespace std;


int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow window;
    window.show();

    return application.exec();
}

/*
 * Here we have three layers
 *
 * 1. layer (Presentation layer) is UI
 * 2. layer (Domain layer) is Engine that calculates everything and does all the work
 * 3. layer (Data layer) is Data which keeps track of data
 *
 * Then we have two more clases Scientist and Computer
 */
