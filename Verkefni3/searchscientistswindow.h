#ifndef SEARCHSCIENTISTSWINDOW_H
#define SEARCHSCIENTISTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchScientistsWindow;
}

class SearchScientistsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchScientistsWindow(QWidget *parent = 0);
    ~SearchScientistsWindow();

private:
    Ui::SearchScientistsWindow *ui;
};

#endif // SEARCHSCIENTISTSWINDOW_H
