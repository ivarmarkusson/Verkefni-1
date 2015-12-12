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
    connect(ui->pushButton_close,SIGNAL(clicked()), this, SLOT(close()));
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
