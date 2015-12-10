#ifndef EDITCOMPUTERSWINDOW_H
#define EDITCOMPUTERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class EditComputersWindow;
}

class EditComputersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditComputersWindow(QWidget *parent = 0);
    ~EditComputersWindow();

private:
    Ui::EditComputersWindow *ui;
};

#endif // EDITCOMPUTERSWINDOW_H
