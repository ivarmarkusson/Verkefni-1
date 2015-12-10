#include "searchcomputerswindow.h"
#include "ui_searchcomputerswindow.h"

SearchComputersWindow::SearchComputersWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchComputersWindow)
{
    ui->setupUi(this);
}

SearchComputersWindow::~SearchComputersWindow()
{
    delete ui;
}
