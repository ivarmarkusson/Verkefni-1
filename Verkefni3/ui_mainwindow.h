/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *displayScientistsMenu_pushButton;
    QPushButton *displayComputersMenu_pushButton;
    QPushButton *editScientistsMenu_pushButton;
    QPushButton *editComputersMenu_pushButton;
    QPushButton *searchScientistsMenu_pushButton;
    QPushButton *searchComputersMenu_pushButton;
    QPushButton *connectionMenu_pushButton;
    QPushButton *quit_pushButton;
    QMenuBar *menuBar;
    QMenu *menuMain_Menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(418, 402);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        displayScientistsMenu_pushButton = new QPushButton(centralWidget);
        displayScientistsMenu_pushButton->setObjectName(QStringLiteral("displayScientistsMenu_pushButton"));

        verticalLayout->addWidget(displayScientistsMenu_pushButton);

        displayComputersMenu_pushButton = new QPushButton(centralWidget);
        displayComputersMenu_pushButton->setObjectName(QStringLiteral("displayComputersMenu_pushButton"));

        verticalLayout->addWidget(displayComputersMenu_pushButton);

        editScientistsMenu_pushButton = new QPushButton(centralWidget);
        editScientistsMenu_pushButton->setObjectName(QStringLiteral("editScientistsMenu_pushButton"));

        verticalLayout->addWidget(editScientistsMenu_pushButton);

        editComputersMenu_pushButton = new QPushButton(centralWidget);
        editComputersMenu_pushButton->setObjectName(QStringLiteral("editComputersMenu_pushButton"));

        verticalLayout->addWidget(editComputersMenu_pushButton);

        searchScientistsMenu_pushButton = new QPushButton(centralWidget);
        searchScientistsMenu_pushButton->setObjectName(QStringLiteral("searchScientistsMenu_pushButton"));

        verticalLayout->addWidget(searchScientistsMenu_pushButton);

        searchComputersMenu_pushButton = new QPushButton(centralWidget);
        searchComputersMenu_pushButton->setObjectName(QStringLiteral("searchComputersMenu_pushButton"));

        verticalLayout->addWidget(searchComputersMenu_pushButton);

        connectionMenu_pushButton = new QPushButton(centralWidget);
        connectionMenu_pushButton->setObjectName(QStringLiteral("connectionMenu_pushButton"));

        verticalLayout->addWidget(connectionMenu_pushButton);

        quit_pushButton = new QPushButton(centralWidget);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));

        verticalLayout->addWidget(quit_pushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 418, 21));
        menuMain_Menu = new QMenu(menuBar);
        menuMain_Menu->setObjectName(QStringLiteral("menuMain_Menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMain_Menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Welcome To Our DataBase<br/></span></p></body></html>", 0));
        displayScientistsMenu_pushButton->setText(QApplication::translate("MainWindow", "Display Computer Scientists", 0));
        displayComputersMenu_pushButton->setText(QApplication::translate("MainWindow", "Display Computers", 0));
        editScientistsMenu_pushButton->setText(QApplication::translate("MainWindow", "Edit Computer Scientists", 0));
        editComputersMenu_pushButton->setText(QApplication::translate("MainWindow", "Edit Computers", 0));
        searchScientistsMenu_pushButton->setText(QApplication::translate("MainWindow", "Search Computer Scientists", 0));
        searchComputersMenu_pushButton->setText(QApplication::translate("MainWindow", "Search Computers", 0));
        connectionMenu_pushButton->setText(QApplication::translate("MainWindow", "Connections", 0));
        quit_pushButton->setText(QApplication::translate("MainWindow", "Quit Program", 0));
        menuMain_Menu->setTitle(QApplication::translate("MainWindow", "Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
