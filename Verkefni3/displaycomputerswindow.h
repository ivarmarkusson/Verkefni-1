#ifndef DISPLAYCOMPUTERSWINDOW_H
#define DISPLAYCOMPUTERSWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <vector>
#include "computer.h"
#include "data.h"

using namespace std;

namespace Ui {
class DisplayComputersWindow;
}

class DisplayComputersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayComputersWindow(QWidget *parent = 0);
    ~DisplayComputersWindow();

private:
    void displayAllComputers();
    void displayComputers(vector<Computer> computers);

    Ui::DisplayComputersWindow *ui;

    Data dataObj;
    vector<Computer> currentlyDisplayedComputers;
};

#endif // DISPLAYCOMPUTERSWINDOW_H
