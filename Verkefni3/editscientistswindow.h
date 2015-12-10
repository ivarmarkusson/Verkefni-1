#ifndef EDITSCIENTISTSWINDOW_H
#define EDITSCIENTISTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class EditScientistsWindow;
}

class EditScientistsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditScientistsWindow(QWidget *parent = 0);
    ~EditScientistsWindow();

private:
    Ui::EditScientistsWindow *ui;
};

#endif // EDITSCIENTISTSWINDOW_H
