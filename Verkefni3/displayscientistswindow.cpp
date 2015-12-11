#include "displayscientistswindow.h"
#include "ui_displayscientistswindow.h"

#include <QMessageBox>
#include <QDebug>

DisplayScientistsWindow::DisplayScientistsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayScientistsWindow)
{
    ui->setupUi(this);
    displayAllScientists();
    connect(ui->display_pushButton,SIGNAL(clicked()), this, SLOT(displayAllScientists()));
}

DisplayScientistsWindow::~DisplayScientistsWindow()
{
    delete ui;

}



void DisplayScientistsWindow::displayAllScientists()
{
    vector<Scientist> scientists = dataObj.SortSci("SELECT * FROM Persons Order By Name ASC");
    displayScientists(scientists);
}

void DisplayScientistsWindow::displayScientists(vector<Scientist> scientists)
{
    ui->displayTable_tableWidget->clearContents();
    ui->displayTable_tableWidget->setRowCount(scientists.size());
    ui->displayTable_tableWidget->setColumnCount(4);

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

        ui->displayTable_tableWidget->setItem(i, 0, new QTableWidgetItem(name));
        ui->displayTable_tableWidget->setItem(i, 1, new QTableWidgetItem(yearborn));
        ui->displayTable_tableWidget->setItem(i, 2, new QTableWidgetItem(yeardead));
        ui->displayTable_tableWidget->setItem(i, 3, new QTableWidgetItem(gender));
    }

    currentlyDisplayedScientists = scientists;
}

