#include "displaywindow.h"
#include "ui_displaywindow.h"

#include <QMessageBox>
#include <QDebug>

DisplayWindow::DisplayWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayWindow)
{
    ui->setupUi(this);
    displayAllScientists();
    displayAllComputers();
    displayAllConnections();
    connect(ui->pushButton_close,SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_add_sci, SIGNAL(clicked()), this, SLOT(addScientist()));
}

DisplayWindow::~DisplayWindow()
{
    delete ui;
}


void DisplayWindow::displayAllScientists()
{
    vector<Scientist> scientists;
    scientists.clear();
    currentlyDisplayedScientists.clear();
    scientists = engineObj.sortSientists(1);
    displayScientists(scientists);
}

void DisplayWindow::displayAllComputers()
{
    vector<Computer> computers;
    computers.clear();
    currentlyDisplayedComputers.clear();
    computers = engineObj.sortComputers(1);
    displayComputers(computers);
}


void DisplayWindow::displayComputers(vector<Computer> computers)
{
    ui->table_display_com->clearContents();
    ui->table_display_com->setRowCount(computers.size());
    ui->table_display_com->setColumnCount(4);

    //qDebug() << "size" << computers.size();
    //qDebug() << "size of scientists vector" << computers.size();

    ui->table_display_com->setSortingEnabled(false);

    for(unsigned int i = 0; i < computers.size(); i++)
    {
        QString name = QString::fromStdString(computers.at(i).getName_Computer());
        QString type = QString::fromStdString(computers.at(i).getType_Computer());
        QString year = QString::fromStdString(computers.at(i).getYearBuilt_Computer());
        QString built = QString::fromStdString(computers.at(i).getBuilt_Computer());

        ui->table_display_com->setItem(i, 0, new QTableWidgetItem(name));
        ui->table_display_com->setItem(i, 1, new QTableWidgetItem(type));
        ui->table_display_com->setItem(i, 2, new QTableWidgetItem(year));
        ui->table_display_com->setItem(i, 3, new QTableWidgetItem(built));
    }

    ui->table_display_com->setSortingEnabled(true);

    currentlyDisplayedComputers = computers;
}

void DisplayWindow::displayAllConnections()
{
    vector<Connection> connections;
    connections.clear();
    connections = engineObj.sortConnections();
    displayConnections(connections);
}

void DisplayWindow::displayConnections(vector<Connection> connections)
{
    ui->table_display_connect->clearContents();
    ui->table_display_connect->setRowCount(connections.size());
    ui->table_display_connect->setColumnCount(2);

    //qDebug() << "size" << connections.size();
    //qDebug() << "size of scientists vector" << dataObj.connectionVector.size();

    ui->table_display_connect->setSortingEnabled(false);

    for(unsigned int i = 0; i < connections.size(); i++)
    {
        Connection currentConnections = connections.at(i);

        QString name_computer = QString::fromStdString(currentConnections.getName_Com());
        QString name_scientist = QString::fromStdString(currentConnections.getName_Sci());

        ui->table_display_connect->setItem(i, 0, new QTableWidgetItem(name_scientist));
        ui->table_display_connect->setItem(i, 1, new QTableWidgetItem(name_computer));
    }

    ui->table_display_connect->setSortingEnabled(true);
}

void DisplayWindow::displayScientists(vector<Scientist> scientists)
{
    ui->table_display_sci->clearContents();
    ui->table_display_sci->setRowCount(scientists.size());
    ui->table_display_sci->setColumnCount(4);

    qDebug() << "size" << scientists.size();
    //qDebug() << "size of scientists vector" << dataObj.scientistVector.size();

    ui->table_display_sci->setSortingEnabled(false);

    for(unsigned int i = 0; i < scientists.size(); i++)
    {
        QString name = QString::fromStdString(scientists.at(i).getName_Scientist());
        QString yearborn = QString::fromStdString(scientists.at(i).getBirth_Scientist());
        QString yeardead = QString::fromStdString(scientists.at(i).getDeath_Scientist());
        QString gender = QString::fromStdString(scientists.at(i).getGender_Scientist());

        //qDebug() << "name:" << name;

        ui->table_display_sci->setItem(i, 0, new QTableWidgetItem(name));
        ui->table_display_sci->setItem(i, 1, new QTableWidgetItem(yearborn));
        ui->table_display_sci->setItem(i, 2, new QTableWidgetItem(yeardead));
        ui->table_display_sci->setItem(i, 3, new QTableWidgetItem(gender));
    }

    ui->table_display_sci->setSortingEnabled(true);

}

void DisplayWindow::addScientist()
{
    string name = ui->line_sci_name_add_remove_edit->text().toStdString();
    string gender = ui->line_sci_gender_add_remove_edit->text().toStdString();
    string birth = ui->line_sci_birth_add_remove_edit->text().toStdString();
    string death = ui->line_sci_death_add_remove_edit->text().toStdString();

    Scientist newScientist;

    if(name.empty()|| birth.empty() || gender.empty()
                || atoi(birth.c_str()) > 2015 || atoi(death.c_str()) > 2015
                || ((atoi(birth.c_str()) > atoi(death.c_str())) && death != "")
                || gender != "Male" && gender != "male" && gender != "Female" && gender != "female")
        {
            ui->statusbar->showMessage("Invalid Input, Try Again!", 3000);
        }
        else
        {
            if(death == "")
            {
                death = "Alive";
            }
            newScientist.setName_Scientist(name);
            newScientist.setGender_Scientist(gender);
            newScientist.setBirth_Scientist(birth);
            newScientist.setDeath_Scientist(death);

            engineObj.addScientists(newScientist);
            ui->statusbar->showMessage("Scientist Has Been Added!", 3000);
        }



}


void DisplayWindow::addComputer()
{
    string name = ui->line_com_name_add_remove_edit->text().toStdString();
    string type = ui->line_com_type_add_remove_edit->text().toStdString();
    string year = ui->line_com_year_add_remove_edit->text().toStdString();
    string built = ui->line_com_built_add_remove_edit->text().toStdString();

    Computer newComputer;

    newComputer.setName_Computer(name);
    newComputer.setType_Computer(type);
    newComputer.setYearBuilt_Computer(year);
    newComputer.setBuilt_Computer(built);

    if(name.empty() || type.empty() || year.empty() || built.empty()
            || (built != "Yes" && built != "yes" && built != "No" && built != "no"
            || atoi(year.c_str()) > 2015))
        {
            ui->statusbar->showMessage("Invalid Input, Try Again!", 3000);
        }
        else
        {
            engineObj.addComputers(newComputer);

            ui->statusbar->showMessage("Computer Has Been Added", 3000);
        }
}

void DisplayWindow::on_pushButton_add_sci_clicked()
{
    addScientist();
    displayAllScientists();
}

void DisplayWindow::on_pushButton_com_add_clicked()
{
    addComputer();
    displayAllComputers();
}

void DisplayWindow::on_line_search_sci_textChanged(const QString &arg1)
{
    string input = ui->line_search_sci->text().toStdString();

    vector<Scientist> searchResults;
    searchResults.clear();

    searchResults = engineObj.searchScientists(input);
    displayScientists(searchResults);
}

void DisplayWindow::on_line_search_com_textChanged(const QString &arg1)
{
    string input = ui->line_search_com->text().toStdString();

    vector<Computer> searchResults;
    searchResults.clear();

    searchResults = engineObj.searchComputers(input);
    displayComputers(searchResults);
}
