#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "displayscientistswindow.h"
#include "displaycomputerswindow.h"
#include "searchscientistswindow.h"
#include "searchcomputerswindow.h"
#include "editscientistswindow.h"
#include "editcomputerswindow.h"
#include "connectionswindow.h"
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void openDisplayScientistsWindow();
    void openDisplayComputersWindow();

    void openSearchScientistsWindow();
    void openSearchComputersWindow();

    void openEditScientistsWindow();
    void openEditComputersWindow();

    void openConnectionsWindow();

private:
    Ui::MainWindow *ui;

    DisplayScientistsWindow *displayScientistsWindowObj;
    DisplayComputersWindow *displayComputersWindowObj;

    SearchScientistsWindow *searchScientistsWindowObj;
    SearchComputersWindow *searchComputersWindowObj;

    EditScientistsWindow *editScientistsWindowObj;
    EditComputersWindow *editComputersWindowObj;

    ConnectionsWindow *connectionsWindowObj;

private slots:
    void onDisplayScientistsMenu_buttonClicked();
    void onDisplayComputersMenu_buttonClicked();

    void onSearchScientistsMenu_buttonClicked();
    void onSearchComputersMenu_buttonClicked();

    void onEditScientistsMenu_buttonClicked();
    void onEditComputersMenu_buttonClicked();

    void onConnectionsMenu_buttonClicked();
};

#endif // MAINWINDOW_H
