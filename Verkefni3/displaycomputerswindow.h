#ifndef DISPLAYCOMPUTERSWINDOW_H
#define DISPLAYCOMPUTERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class DisplayComputersWindow;
}

class DisplayComputersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayComputersWindow(QWidget *parent = 0);
    ~DisplayComputersWindow();

private:
    Ui::DisplayComputersWindow *ui;
};

#endif // DISPLAYCOMPUTERSWINDOW_H
