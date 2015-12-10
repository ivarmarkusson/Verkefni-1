#include "displaycomputerswindow.h"
#include "ui_displaycomputerswindow.h"

DisplayComputersWindow::DisplayComputersWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayComputersWindow)
{
    ui->setupUi(this);
}

DisplayComputersWindow::~DisplayComputersWindow()
{
    delete ui;
}
