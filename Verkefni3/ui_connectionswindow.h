/********************************************************************************
** Form generated from reading UI file 'connectionswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONSWINDOW_H
#define UI_CONNECTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *display_ConnectSciToComp_label;
    QLabel *scientist_label;
    QLabel *name_label;
    QLineEdit *name_lineEdit;
    QTableWidget *showScientist_tableWidget;
    QLabel *birth_label;
    QLineEdit *birth_lineEdit;
    QLabel *death_label;
    QLineEdit *death_lineEdit;
    QLabel *gender_label;
    QLineEdit *gender_lineEdit;
    QPushButton *findScientist_pushButton;
    QPushButton *selectScientist_pushButton;
    QLineEdit *scientistError_lineEdit;
    QLabel *computer_label;
    QLabel *ComputerName_label;
    QLineEdit *name_computer_lineEdit;
    QTableWidget *tableWidget_2;
    QLabel *Computer_Built_label;
    QLineEdit *computer_built_lineEdit;
    QLabel *computer_Type_label;
    QLineEdit *computer_type_lineEdit;
    QLabel *ifBuilt_label;
    QLineEdit *computer_if_built_lineEdit;
    QPushButton *computer_find_pushButton;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_10;
    QPushButton *view_connection_pushButton;
    QLineEdit *computer_connect_error_lineEdit;
    QPushButton *view_connection_pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ConnectionsWindow)
    {
        if (ConnectionsWindow->objectName().isEmpty())
            ConnectionsWindow->setObjectName(QStringLiteral("ConnectionsWindow"));
        ConnectionsWindow->resize(800, 600);
        centralwidget = new QWidget(ConnectionsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        display_ConnectSciToComp_label = new QLabel(centralwidget);
        display_ConnectSciToComp_label->setObjectName(QStringLiteral("display_ConnectSciToComp_label"));

        gridLayout->addWidget(display_ConnectSciToComp_label, 0, 0, 1, 2);

        scientist_label = new QLabel(centralwidget);
        scientist_label->setObjectName(QStringLiteral("scientist_label"));

        gridLayout->addWidget(scientist_label, 1, 0, 1, 1);

        name_label = new QLabel(centralwidget);
        name_label->setObjectName(QStringLiteral("name_label"));

        gridLayout->addWidget(name_label, 2, 0, 1, 1);

        name_lineEdit = new QLineEdit(centralwidget);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));

        gridLayout->addWidget(name_lineEdit, 2, 1, 1, 1);

        showScientist_tableWidget = new QTableWidget(centralwidget);
        if (showScientist_tableWidget->columnCount() < 4)
            showScientist_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        showScientist_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        showScientist_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        showScientist_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        showScientist_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        showScientist_tableWidget->setObjectName(QStringLiteral("showScientist_tableWidget"));

        gridLayout->addWidget(showScientist_tableWidget, 2, 2, 4, 2);

        birth_label = new QLabel(centralwidget);
        birth_label->setObjectName(QStringLiteral("birth_label"));

        gridLayout->addWidget(birth_label, 3, 0, 1, 1);

        birth_lineEdit = new QLineEdit(centralwidget);
        birth_lineEdit->setObjectName(QStringLiteral("birth_lineEdit"));

        gridLayout->addWidget(birth_lineEdit, 3, 1, 1, 1);

        death_label = new QLabel(centralwidget);
        death_label->setObjectName(QStringLiteral("death_label"));

        gridLayout->addWidget(death_label, 4, 0, 1, 1);

        death_lineEdit = new QLineEdit(centralwidget);
        death_lineEdit->setObjectName(QStringLiteral("death_lineEdit"));

        gridLayout->addWidget(death_lineEdit, 4, 1, 1, 1);

        gender_label = new QLabel(centralwidget);
        gender_label->setObjectName(QStringLiteral("gender_label"));

        gridLayout->addWidget(gender_label, 5, 0, 1, 1);

        gender_lineEdit = new QLineEdit(centralwidget);
        gender_lineEdit->setObjectName(QStringLiteral("gender_lineEdit"));

        gridLayout->addWidget(gender_lineEdit, 5, 1, 1, 1);

        findScientist_pushButton = new QPushButton(centralwidget);
        findScientist_pushButton->setObjectName(QStringLiteral("findScientist_pushButton"));

        gridLayout->addWidget(findScientist_pushButton, 6, 1, 1, 1);

        selectScientist_pushButton = new QPushButton(centralwidget);
        selectScientist_pushButton->setObjectName(QStringLiteral("selectScientist_pushButton"));

        gridLayout->addWidget(selectScientist_pushButton, 6, 2, 1, 1);

        scientistError_lineEdit = new QLineEdit(centralwidget);
        scientistError_lineEdit->setObjectName(QStringLiteral("scientistError_lineEdit"));

        gridLayout->addWidget(scientistError_lineEdit, 6, 3, 1, 1);

        computer_label = new QLabel(centralwidget);
        computer_label->setObjectName(QStringLiteral("computer_label"));

        gridLayout->addWidget(computer_label, 7, 0, 1, 1);

        ComputerName_label = new QLabel(centralwidget);
        ComputerName_label->setObjectName(QStringLiteral("ComputerName_label"));

        gridLayout->addWidget(ComputerName_label, 8, 0, 1, 1);

        name_computer_lineEdit = new QLineEdit(centralwidget);
        name_computer_lineEdit->setObjectName(QStringLiteral("name_computer_lineEdit"));

        gridLayout->addWidget(name_computer_lineEdit, 8, 1, 1, 1);

        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 8, 2, 4, 2);

        Computer_Built_label = new QLabel(centralwidget);
        Computer_Built_label->setObjectName(QStringLiteral("Computer_Built_label"));

        gridLayout->addWidget(Computer_Built_label, 9, 0, 1, 1);

        computer_built_lineEdit = new QLineEdit(centralwidget);
        computer_built_lineEdit->setObjectName(QStringLiteral("computer_built_lineEdit"));

        gridLayout->addWidget(computer_built_lineEdit, 9, 1, 1, 1);

        computer_Type_label = new QLabel(centralwidget);
        computer_Type_label->setObjectName(QStringLiteral("computer_Type_label"));

        gridLayout->addWidget(computer_Type_label, 10, 0, 1, 1);

        computer_type_lineEdit = new QLineEdit(centralwidget);
        computer_type_lineEdit->setObjectName(QStringLiteral("computer_type_lineEdit"));

        gridLayout->addWidget(computer_type_lineEdit, 10, 1, 1, 1);

        ifBuilt_label = new QLabel(centralwidget);
        ifBuilt_label->setObjectName(QStringLiteral("ifBuilt_label"));

        gridLayout->addWidget(ifBuilt_label, 11, 0, 1, 1);

        computer_if_built_lineEdit = new QLineEdit(centralwidget);
        computer_if_built_lineEdit->setObjectName(QStringLiteral("computer_if_built_lineEdit"));

        gridLayout->addWidget(computer_if_built_lineEdit, 11, 1, 1, 1);

        computer_find_pushButton = new QPushButton(centralwidget);
        computer_find_pushButton->setObjectName(QStringLiteral("computer_find_pushButton"));

        gridLayout->addWidget(computer_find_pushButton, 12, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 12, 2, 1, 1);

        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 12, 3, 1, 1);

        view_connection_pushButton = new QPushButton(centralwidget);
        view_connection_pushButton->setObjectName(QStringLiteral("view_connection_pushButton"));

        gridLayout->addWidget(view_connection_pushButton, 13, 1, 1, 1);

        computer_connect_error_lineEdit = new QLineEdit(centralwidget);
        computer_connect_error_lineEdit->setObjectName(QStringLiteral("computer_connect_error_lineEdit"));

        gridLayout->addWidget(computer_connect_error_lineEdit, 13, 2, 1, 1);

        view_connection_pushButton_2 = new QPushButton(centralwidget);
        view_connection_pushButton_2->setObjectName(QStringLiteral("view_connection_pushButton_2"));

        gridLayout->addWidget(view_connection_pushButton_2, 14, 1, 1, 1);

        ConnectionsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ConnectionsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        ConnectionsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ConnectionsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ConnectionsWindow->setStatusBar(statusbar);

        retranslateUi(ConnectionsWindow);

        QMetaObject::connectSlotsByName(ConnectionsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConnectionsWindow)
    {
        ConnectionsWindow->setWindowTitle(QApplication::translate("ConnectionsWindow", "MainWindow", 0));
        display_ConnectSciToComp_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">CONNECT SCIENTISTS TO COMPUTERS</span></p></body></html>", 0));
        scientist_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Scientist</span></p></body></html>", 0));
        name_label->setText(QApplication::translate("ConnectionsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem = showScientist_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConnectionsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = showScientist_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConnectionsWindow", "Birth", 0));
        QTableWidgetItem *___qtablewidgetitem2 = showScientist_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ConnectionsWindow", "Death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = showScientist_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ConnectionsWindow", "Gender", 0));
        birth_label->setText(QApplication::translate("ConnectionsWindow", "Birth", 0));
        death_label->setText(QApplication::translate("ConnectionsWindow", "Death", 0));
        gender_label->setText(QApplication::translate("ConnectionsWindow", "Gender", 0));
        findScientist_pushButton->setText(QApplication::translate("ConnectionsWindow", "Find Scientist", 0));
        selectScientist_pushButton->setText(QApplication::translate("ConnectionsWindow", "Select", 0));
        computer_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Computer</span></p></body></html>", 0));
        ComputerName_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p>Name</p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ConnectionsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ConnectionsWindow", "Year", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ConnectionsWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("ConnectionsWindow", "If Built", 0));
        Computer_Built_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p>Built</p></body></html>", 0));
        computer_Type_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p>Type</p></body></html>", 0));
        ifBuilt_label->setText(QApplication::translate("ConnectionsWindow", "<html><head/><body><p>If Built</p></body></html>", 0));
        computer_find_pushButton->setText(QApplication::translate("ConnectionsWindow", "Find Computer", 0));
        pushButton_3->setText(QApplication::translate("ConnectionsWindow", "Select", 0));
        view_connection_pushButton->setText(QApplication::translate("ConnectionsWindow", "Connect", 0));
        view_connection_pushButton_2->setText(QApplication::translate("ConnectionsWindow", "View Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectionsWindow: public Ui_ConnectionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONSWINDOW_H
