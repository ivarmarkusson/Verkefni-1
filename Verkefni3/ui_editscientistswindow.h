/********************************************************************************
** Form generated from reading UI file 'editscientistswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSCIENTISTSWINDOW_H
#define UI_EDITSCIENTISTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditScientistsWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *computerScientistList_tableWidget;
    QLineEdit *built_lineEdit;
    QLabel *add_label;
    QLabel *name_label;
    QLineEdit *yearBuilt_lineEdit;
    QLineEdit *name_lineEdit;
    QPushButton *add_pushButton_2;
    QLineEdit *type_lineEdit;
    QPushButton *removeSelected_pushButton;
    QLabel *born_label;
    QLabel *editComputerScientist_label;
    QLabel *label;
    QLabel *gender_label;
    QScrollBar *computers_verticalScrollBar;
    QLabel *died_label;
    QPushButton *Close_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditScientistsWindow)
    {
        if (EditScientistsWindow->objectName().isEmpty())
            EditScientistsWindow->setObjectName(QStringLiteral("EditScientistsWindow"));
        EditScientistsWindow->resize(800, 600);
        centralwidget = new QWidget(EditScientistsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        computerScientistList_tableWidget = new QTableWidget(centralwidget);
        if (computerScientistList_tableWidget->columnCount() < 4)
            computerScientistList_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        computerScientistList_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        computerScientistList_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        computerScientistList_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        computerScientistList_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        computerScientistList_tableWidget->setObjectName(QStringLiteral("computerScientistList_tableWidget"));
        computerScientistList_tableWidget->setGeometry(QRect(10, 50, 591, 241));
        built_lineEdit = new QLineEdit(centralwidget);
        built_lineEdit->setObjectName(QStringLiteral("built_lineEdit"));
        built_lineEdit->setGeometry(QRect(90, 440, 113, 21));
        add_label = new QLabel(centralwidget);
        add_label->setObjectName(QStringLiteral("add_label"));
        add_label->setGeometry(QRect(20, 320, 71, 16));
        name_label = new QLabel(centralwidget);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setGeometry(QRect(20, 350, 59, 16));
        yearBuilt_lineEdit = new QLineEdit(centralwidget);
        yearBuilt_lineEdit->setObjectName(QStringLiteral("yearBuilt_lineEdit"));
        yearBuilt_lineEdit->setGeometry(QRect(90, 410, 113, 21));
        name_lineEdit = new QLineEdit(centralwidget);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(90, 350, 113, 21));
        add_pushButton_2 = new QPushButton(centralwidget);
        add_pushButton_2->setObjectName(QStringLiteral("add_pushButton_2"));
        add_pushButton_2->setGeometry(QRect(20, 480, 115, 32));
        type_lineEdit = new QLineEdit(centralwidget);
        type_lineEdit->setObjectName(QStringLiteral("type_lineEdit"));
        type_lineEdit->setGeometry(QRect(90, 380, 113, 21));
        removeSelected_pushButton = new QPushButton(centralwidget);
        removeSelected_pushButton->setObjectName(QStringLiteral("removeSelected_pushButton"));
        removeSelected_pushButton->setGeometry(QRect(220, 300, 151, 31));
        born_label = new QLabel(centralwidget);
        born_label->setObjectName(QStringLiteral("born_label"));
        born_label->setGeometry(QRect(20, 380, 59, 16));
        editComputerScientist_label = new QLabel(centralwidget);
        editComputerScientist_label->setObjectName(QStringLiteral("editComputerScientist_label"));
        editComputerScientist_label->setGeometry(QRect(190, 10, 261, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 280, 121, 21));
        gender_label = new QLabel(centralwidget);
        gender_label->setObjectName(QStringLiteral("gender_label"));
        gender_label->setGeometry(QRect(20, 440, 59, 16));
        computers_verticalScrollBar = new QScrollBar(centralwidget);
        computers_verticalScrollBar->setObjectName(QStringLiteral("computers_verticalScrollBar"));
        computers_verticalScrollBar->setGeometry(QRect(580, 80, 16, 160));
        computers_verticalScrollBar->setOrientation(Qt::Vertical);
        died_label = new QLabel(centralwidget);
        died_label->setObjectName(QStringLiteral("died_label"));
        died_label->setGeometry(QRect(20, 410, 71, 16));
        Close_pushButton = new QPushButton(centralwidget);
        Close_pushButton->setObjectName(QStringLiteral("Close_pushButton"));
        Close_pushButton->setGeometry(QRect(450, 480, 115, 32));
        EditScientistsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditScientistsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        EditScientistsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditScientistsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EditScientistsWindow->setStatusBar(statusbar);

        retranslateUi(EditScientistsWindow);

        QMetaObject::connectSlotsByName(EditScientistsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditScientistsWindow)
    {
        EditScientistsWindow->setWindowTitle(QApplication::translate("EditScientistsWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = computerScientistList_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditScientistsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = computerScientistList_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditScientistsWindow", "Born", 0));
        QTableWidgetItem *___qtablewidgetitem2 = computerScientistList_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditScientistsWindow", "Died", 0));
        QTableWidgetItem *___qtablewidgetitem3 = computerScientistList_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditScientistsWindow", "Gender", 0));
        add_label->setText(QApplication::translate("EditScientistsWindow", "Add:", 0));
        name_label->setText(QApplication::translate("EditScientistsWindow", "Name:", 0));
        add_pushButton_2->setText(QApplication::translate("EditScientistsWindow", "Add", 0));
        removeSelected_pushButton->setText(QApplication::translate("EditScientistsWindow", "Remove selected", 0));
        born_label->setText(QApplication::translate("EditScientistsWindow", "Born:", 0));
        editComputerScientist_label->setText(QApplication::translate("EditScientistsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Edit computer scientist list</span></p></body></html>", 0));
        label->setText(QString());
        gender_label->setText(QApplication::translate("EditScientistsWindow", "Gender:", 0));
        died_label->setText(QApplication::translate("EditScientistsWindow", "Died:", 0));
        Close_pushButton->setText(QApplication::translate("EditScientistsWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class EditScientistsWindow: public Ui_EditScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSCIENTISTSWINDOW_H
