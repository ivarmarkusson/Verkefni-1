#include "displaycomputerswindow.h"
#include "ui_displaycomputerswindow.h"

#include <QMessageBox>
#include <QDebug>

DisplayComputersWindow::DisplayComputersWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayComputersWindow)
{
    ui->setupUi(this);
    displayAllComputers();
    connect(ui->display_pushButton,SIGNAL(clicked()), this, SLOT(displayAllComputers()));
}

DisplayComputersWindow::~DisplayComputersWindow()
{
    delete ui;
}



void DisplayComputersWindow::displayAllComputers()
{
    vector<Computer> computers;
    computers.clear();
    computers = dataObj.SortCom("SELECT * FROM computers Order By Name ASC");
    displayComputers(computers);
}

void DisplayComputersWindow::displayComputers(vector<Computer> computers)
{
    ui->displayTable_tableWidget->clearContents();
    ui->displayTable_tableWidget->setRowCount(computers.size());
    ui->displayTable_tableWidget->setColumnCount(4);

    qDebug() << "size" << computers.size();
    qDebug() << "size of scientists vector" << computers.size();

    for(unsigned int i = 0; i < computers.size(); i++)
    {
        QString name = QString::fromStdString(computers.at(i).getName_Computer());
        QString type = QString::fromStdString(computers.at(i).getType_Computer());
        QString year = QString::fromStdString(computers.at(i).getYearBuilt_Computer());
        QString built = QString::fromStdString(computers.at(i).getBuilt_Computer());

        ui->displayTable_tableWidget->setItem(i, 0, new QTableWidgetItem(name));
        ui->displayTable_tableWidget->setItem(i, 1, new QTableWidgetItem(type));
        ui->displayTable_tableWidget->setItem(i, 2, new QTableWidgetItem(year));
        ui->displayTable_tableWidget->setItem(i, 3, new QTableWidgetItem(built));
    }

    currentlyDisplayedComputers = computers;
}
