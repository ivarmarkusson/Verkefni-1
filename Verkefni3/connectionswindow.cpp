#include "connectionswindow.h"
#include "ui_connectionswindow.h"

ConnectionsWindow::ConnectionsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectionsWindow)
{
    ui->setupUi(this);
}

ConnectionsWindow::~ConnectionsWindow()
{
    delete ui;
}
