#include "editcomputerswindow.h"
#include "ui_editcomputerswindow.h"

EditComputersWindow::EditComputersWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditComputersWindow)
{
    ui->setupUi(this);
}

EditComputersWindow::~EditComputersWindow()
{
    delete ui;
}
