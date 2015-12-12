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

//Here can we connect GUI to Engine(Domain)


void DisplayWindow::displayAllScientists()
{
    vector<Scientist> scientists = dataObj.SortSci("SELECT * FROM Persons Order By Name ASC");
    displayScientists(scientists);
}

void DisplayWindow::displayAllComputers()
{
    vector<Computer> computers;
    computers.clear();
    computers = dataObj.SortCom("SELECT * FROM computers Order By Name ASC");
    displayComputers(computers);
}


void DisplayWindow::displayComputers(vector<Computer> computers)
{
    ui->table_display_com->clearContents();
    ui->table_display_com->setRowCount(computers.size());
    ui->table_display_com->setColumnCount(4);

    qDebug() << "size" << computers.size();
    qDebug() << "size of scientists vector" << computers.size();

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

    currentlyDisplayedComputers = computers;
}

void DisplayWindow::displayAllConnections()
{
    vector<Connection> connections;
    connections.clear();
    connections = dataObj.viewConnected("SELECT persons.Name as pName, ComPutErs.Name FROM Persons "
                                        "INNER JOIN tengitafla ON persons.ID = tengitafla.ID INNER "
                                        "JOIN Computers ON computers.ID = tengitafla.ID");
    displayConnections(connections);
}

void DisplayWindow::displayConnections(vector<Connection> connections)
{
    ui->table_display_connect->clearContents();
    ui->table_display_connect->setRowCount(connections.size());
    ui->table_display_connect->setColumnCount(2);

    qDebug() << "size" << connections.size();
    qDebug() << "size of scientists vector" << dataObj.connectionVector.size();

    for(unsigned int i = 0; i < connections.size(); i++)
    {
        Connection currentConnections = connections.at(i);

        QString name_computer = QString::fromStdString(currentConnections.getName_Com());
        QString name_scientist = QString::fromStdString(currentConnections.getName_Sci());

        ui->table_display_connect->setItem(i, 0, new QTableWidgetItem(name_scientist));
        ui->table_display_connect->setItem(i, 1, new QTableWidgetItem(name_computer));
    }
}

void DisplayWindow::displayScientists(vector<Scientist> scientists)
{
    ui->table_display_sci->clearContents();
    ui->table_display_sci->setRowCount(scientists.size());
    ui->table_display_sci->setColumnCount(4);

    qDebug() << "size" << scientists.size();
    qDebug() << "size of scientists vector" << dataObj.scientistVector.size();

    for(unsigned int i = 0; i < scientists.size(); i++)
    {
        Scientist currentScientist = scientists.at(i);

        QString name = QString::fromStdString(currentScientist.getName_Scientist());
        QString yearborn = QString::fromStdString(currentScientist.getBirth_Scientist());
        QString yeardead = QString::fromStdString(currentScientist.getDeath_Scientist());
        QString gender = QString::fromStdString(currentScientist.getGender_Scientist());

        qDebug() << "name:" << name;

        ui->table_display_sci->setItem(i, 0, new QTableWidgetItem(name));
        ui->table_display_sci->setItem(i, 1, new QTableWidgetItem(yearborn));
        ui->table_display_sci->setItem(i, 2, new QTableWidgetItem(yeardead));
        ui->table_display_sci->setItem(i, 3, new QTableWidgetItem(gender));
    }

}

void DisplayWindow::addScientist()
{
    string name = ui->line_sci_name_add_remove_edit->text().toStdString();
    string gender = ui->line_sci_gender_add_remove_edit->text().toStdString();
    string birth = ui->line_sci_birth_add_remove_edit->text().toStdString();
    string death = ui->line_sci_death_add_remove_edit->text().toStdString();

    Scientist newScientist;
    newScientist.setName_Scientist(name);
    newScientist.setGender_Scientist(gender);
    newScientist.setBirth_Scientist(birth);
    newScientist.setDeath_Scientist(death);
    dataObj.AddSci("INSERT INTO persons (Name, Birth, Death, Gender, Hide) "
                   "VALUES (:Name, :Birth, :Death, :Gender, :Hide)", newScientist);
}

void DisplayWindow::on_pushButton_add_sci_clicked()
{
    addScientist();
}
