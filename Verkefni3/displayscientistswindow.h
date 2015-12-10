#ifndef DISPLAYSCIENTISTSWINDOW_H
#define DISPLAYSCIENTISTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class DisplayScientistsWindow;
}

class DisplayScientistsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayScientistsWindow(QWidget *parent = 0);
    ~DisplayScientistsWindow();

private:
    Ui::DisplayScientistsWindow *ui;
};

#endif // DISPLAYSCIENTISTSWINDOW_H
