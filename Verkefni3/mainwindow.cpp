#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->displayScientistsMenu_pushButton, SIGNAL(click()), this, SLOT(openDisplayScientistsWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDisplayScientistsMenu_buttonClicked()
{
    openDisplayScientistsWindow();
}

void MainWindow::openDisplayScientistsWindow()
{
    displayScientistsWindowObj = new DisplayScientistsWindow(); // Be sure to destroy you window somewhere
    displayScientistsWindowObj->show();
}
