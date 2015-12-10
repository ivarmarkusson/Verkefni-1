#ifndef CONNECTIONSWINDOW_H
#define CONNECTIONSWINDOW_H

#include <QMainWindow>

namespace Ui {
class ConnectionsWindow;
}

class ConnectionsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConnectionsWindow(QWidget *parent = 0);
    ~ConnectionsWindow();

private:
    Ui::ConnectionsWindow *ui;
};

#endif // CONNECTIONSWINDOW_H
