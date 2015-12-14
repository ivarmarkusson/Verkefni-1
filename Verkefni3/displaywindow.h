#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <vector>
#include <QString>
#include "scientist.h"
#include "computer.h"
#include "connection.h"
#include "engine.h"
#include <stdlib.h>
#include <QTableWidgetItem>

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

private slots:
    void on_pushButton_add_sci_clicked();

    void on_pushButton_com_add_clicked();

    void on_line_search_sci_textChanged();

    void on_line_search_com_textChanged();

    void on_line_connect_search_sci_textChanged();

    void on_line_connect_search_com_textChanged();

    void on_table_display_sci_clicked();

    void on_table_edit_connect_sci_clicked();

    void on_table_edit_connect_com_clicked();

    void on_pushButton_remove_sci_clicked();

private:
    void displayAllScientists();
    void displayScientists(vector<Scientist> scientists);
    void displaySciConnections(vector<Scientist> scientists);

    void displayAllComputers();
    void displayComputers(vector<Computer> computers);
    void displayComConnections(vector<Computer> computers);

    void displayAllConnections();
    void displayConnections(vector<Connection> connections);



    void addScientist();
    void addComputer();

    Ui::DisplayWindow *ui;

    Engine engineObj;

    bool computerTableClicked;
    bool scientistTableClicked;

    vector<Computer> currentlyDisplayedComputers;
    vector<Scientist> currentlyDisplayedScientists;
    vector<Connection> currentlyDisplayedConnections;
};

#endif // DISPLAYWINDOW_H
