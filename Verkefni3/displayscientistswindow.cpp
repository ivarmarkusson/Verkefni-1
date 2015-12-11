#include "displayscientistswindow.h"
#include "ui_displayscientistswindow.h"

DisplayScientistsWindow::DisplayScientistsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayScientistsWindow)
{
    ui->setupUi(this);
}

DisplayScientistsWindow::~DisplayScientistsWindow()
{
    delete ui;
}



