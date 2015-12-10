#ifndef SEARCHCOMPUTERSWINDOW_H
#define SEARCHCOMPUTERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchComputersWindow;
}

class SearchComputersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchComputersWindow(QWidget *parent = 0);
    ~SearchComputersWindow();

private:
    Ui::SearchComputersWindow *ui;
};

#endif // SEARCHCOMPUTERSWINDOW_H
