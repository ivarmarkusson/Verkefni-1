#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "displayscientistswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void openDisplayScientistsWindow();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void onDisplayScientistsMenu_buttonClicked();
private:
    Ui::MainWindow *ui;
    DisplayScientistsWindow *displayScientistsWindowObj;

};

#endif // MAINWINDOW_H
