#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <vector>
#include "scientist.h"
#include "computer.h"
#include "connection.h"
#include "data.h"

using namespace std;

namespace Ui {
class DisplayWindow;
}

class DisplayWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayWindow(QWidget *parent = 0);
    ~DisplayWindow();

private:
    void displayScientists(vector<Scientist> scientists);
    void displayAllScientists();

    void displayAllComputers();
    void displayComputers(vector<Computer> computers);

    void displayAllConnections();
    void displayConnections(vector<Connection> connections);

    Ui::DisplayWindow *ui;

    Data dataObj;

    vector<Computer> currentlyDisplayedComputers;
    vector<Scientist> currentlyDisplayedScientists;
    vector<Connection> currentlyDisplayedConnections;
};

#endif // DISPLAYWINDOW_H
