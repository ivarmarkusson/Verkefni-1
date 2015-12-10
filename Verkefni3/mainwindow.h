#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "displayscientistswindow.h"
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void openDisplayScientistsWindow();

private:
    Ui::MainWindow *ui;
    DisplayScientistsWindow *displayScientistsWindowObj;

private slots:
    void onDisplayScientistsMenu_buttonClicked();

};

#endif // MAINWINDOW_H
