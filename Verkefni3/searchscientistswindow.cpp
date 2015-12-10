#include "searchscientistswindow.h"
#include "ui_searchscientistswindow.h"

SearchScientistsWindow::SearchScientistsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchScientistsWindow)
{
    ui->setupUi(this);
}

SearchScientistsWindow::~SearchScientistsWindow()
{
    delete ui;
}
