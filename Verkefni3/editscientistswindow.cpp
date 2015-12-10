#include "editscientistswindow.h"
#include "ui_editscientistswindow.h"

EditScientistsWindow::EditScientistsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditScientistsWindow)
{
    ui->setupUi(this);
}

EditScientistsWindow::~EditScientistsWindow()
{
    delete ui;
}
