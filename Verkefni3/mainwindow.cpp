#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->displayScientistsMenu_pushButton, SIGNAL(clicked()), this, SLOT(openDisplayScientistsWindow()));
    connect(ui->displayComputersMenu_pushButton, SIGNAL(clicked()), this, SLOT(openDisplayComputersWindow()));

    connect(ui->editScientistsMenu_pushButton, SIGNAL(clicked()), this, SLOT(openEditScientistsWindow()));
    connect(ui->editComputersMenu_pushButton, SIGNAL(clicked()), this, SLOT(openEditComputersWindow()));

    connect(ui->searchScientistsMenu_pushButton, SIGNAL(clicked()), this, SLOT(openSearchScientistsWindow()));
    connect(ui->searchComputersMenu_pushButton, SIGNAL(clicked()), this, SLOT(openSearchComputersWindow()));

    connect(ui->connectionMenu_pushButton, SIGNAL(clicked()), this, SLOT(openConnectionsWindow()));

    connect(ui->quit_pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//ON BUTTON CLICKED FUNCTIONS
void MainWindow::onDisplayScientistsMenu_buttonClicked()
{
    openDisplayScientistsWindow();
}

void MainWindow::onDisplayComputersMenu_buttonClicked()
{
    openDisplayComputersWindow();
}

void MainWindow::onSearchScientistsMenu_buttonClicked()
{
    openSearchScientistsWindow();
}

void MainWindow::onSearchComputersMenu_buttonClicked()
{
    openSearchComputersWindow();
}

void MainWindow::onEditScientistsMenu_buttonClicked()
{
    openEditScientistsWindow();
}

void MainWindow::onEditComputersMenu_buttonClicked()
{
    openEditComputersWindow();
}

void MainWindow::onConnectionsMenu_buttonClicked()
{
    openConnectionsWindow();
}


//OPEN WINDOWS FUNCTIONS
void MainWindow::openDisplayScientistsWindow()
{
    displayScientistsWindowObj = new DisplayScientistsWindow();
    displayScientistsWindowObj->show();
    this->close();
}

void MainWindow::openDisplayComputersWindow()
{
    displayComputersWindowObj = new DisplayComputersWindow();
    displayComputersWindowObj->show();
    this->close();
}

void MainWindow::openSearchScientistsWindow()
{
    searchScientistsWindowObj = new SearchScientistsWindow();
    searchScientistsWindowObj->show();
    this->close();
}
void MainWindow::openSearchComputersWindow()
{
    searchComputersWindowObj = new SearchComputersWindow();
    searchComputersWindowObj->show();
    this->close();
}

void MainWindow::openEditScientistsWindow()
{
    editScientistsWindowObj = new EditScientistsWindow();
    editScientistsWindowObj->show();
    this->close();
}

void MainWindow::openEditComputersWindow()
{
    editComputersWindowObj = new EditComputersWindow();
    editComputersWindowObj->show();
    this->close();
}

void MainWindow::openConnectionsWindow()
{
    connectionsWindowObj = new ConnectionsWindow();
    connectionsWindowObj->show();
    this->close();
}
