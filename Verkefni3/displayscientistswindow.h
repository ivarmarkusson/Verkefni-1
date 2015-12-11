#ifndef DISPLAYSCIENTISTSWINDOW_H
#define DISPLAYSCIENTISTSWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <vector>
#include "scientist.h"
#include "data.h"

using namespace std;

namespace Ui {
class DisplayScientistsWindow;
}

class DisplayScientistsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayScientistsWindow(QWidget *parent = 0);
    ~DisplayScientistsWindow();


private slots:


private:
    void displayAllScientists();
    void displayScientists(vector<Scientist> scientists);

    Ui::DisplayScientistsWindow *ui;

    Data dataObj;
    vector<Scientist> currentlyDisplayedScientists;

};

#endif // DISPLAYSCIENTISTSWINDOW_H
