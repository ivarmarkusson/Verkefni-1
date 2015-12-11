/********************************************************************************
** Form generated from reading UI file 'editcomputerswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOMPUTERSWINDOW_H
#define UI_EDITCOMPUTERSWINDOW_H

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

class Ui_EditComputersWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *name_lineEdit;
    QLabel *add_label;
    QLabel *name_label;
    QLabel *type_label;
    QLabel *editComputerList_label;
    QLabel *label;
    QLabel *yearBuilt_label;
    QLineEdit *built_lineEdit;
    QTableWidget *computerList_tableWidget;
    QLineEdit *type_lineEdit;
    QLabel *Built_label;
    QPushButton *close_pushButton;
    QScrollBar *computers_verticalScrollBar;
    QPushButton *removeSelected_pushButton;
    QLineEdit *yearBuilt_lineEdit;
    QPushButton *add_pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditComputersWindow)
    {
        if (EditComputersWindow->objectName().isEmpty())
            EditComputersWindow->setObjectName(QStringLiteral("EditComputersWindow"));
        EditComputersWindow->resize(800, 600);
        centralwidget = new QWidget(EditComputersWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        name_lineEdit = new QLineEdit(centralwidget);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(90, 350, 113, 21));
        add_label = new QLabel(centralwidget);
        add_label->setObjectName(QStringLiteral("add_label"));
        add_label->setGeometry(QRect(20, 320, 71, 16));
        name_label = new QLabel(centralwidget);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setGeometry(QRect(20, 350, 59, 16));
        type_label = new QLabel(centralwidget);
        type_label->setObjectName(QStringLiteral("type_label"));
        type_label->setGeometry(QRect(20, 380, 59, 16));
        editComputerList_label = new QLabel(centralwidget);
        editComputerList_label->setObjectName(QStringLiteral("editComputerList_label"));
        editComputerList_label->setGeometry(QRect(190, 10, 231, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 280, 121, 21));
        yearBuilt_label = new QLabel(centralwidget);
        yearBuilt_label->setObjectName(QStringLiteral("yearBuilt_label"));
        yearBuilt_label->setGeometry(QRect(20, 410, 71, 16));
        built_lineEdit = new QLineEdit(centralwidget);
        built_lineEdit->setObjectName(QStringLiteral("built_lineEdit"));
        built_lineEdit->setGeometry(QRect(90, 440, 113, 21));
        computerList_tableWidget = new QTableWidget(centralwidget);
        if (computerList_tableWidget->columnCount() < 4)
            computerList_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        computerList_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        computerList_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        computerList_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        computerList_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        computerList_tableWidget->setObjectName(QStringLiteral("computerList_tableWidget"));
        computerList_tableWidget->setGeometry(QRect(10, 50, 591, 241));
        type_lineEdit = new QLineEdit(centralwidget);
        type_lineEdit->setObjectName(QStringLiteral("type_lineEdit"));
        type_lineEdit->setGeometry(QRect(90, 380, 113, 21));
        Built_label = new QLabel(centralwidget);
        Built_label->setObjectName(QStringLiteral("Built_label"));
        Built_label->setGeometry(QRect(20, 440, 59, 16));
        close_pushButton = new QPushButton(centralwidget);
        close_pushButton->setObjectName(QStringLiteral("close_pushButton"));
        close_pushButton->setGeometry(QRect(430, 480, 115, 32));
        computers_verticalScrollBar = new QScrollBar(centralwidget);
        computers_verticalScrollBar->setObjectName(QStringLiteral("computers_verticalScrollBar"));
        computers_verticalScrollBar->setGeometry(QRect(580, 80, 16, 160));
        computers_verticalScrollBar->setOrientation(Qt::Vertical);
        removeSelected_pushButton = new QPushButton(centralwidget);
        removeSelected_pushButton->setObjectName(QStringLiteral("removeSelected_pushButton"));
        removeSelected_pushButton->setGeometry(QRect(220, 300, 151, 31));
        yearBuilt_lineEdit = new QLineEdit(centralwidget);
        yearBuilt_lineEdit->setObjectName(QStringLiteral("yearBuilt_lineEdit"));
        yearBuilt_lineEdit->setGeometry(QRect(90, 410, 113, 21));
        add_pushButton_2 = new QPushButton(centralwidget);
        add_pushButton_2->setObjectName(QStringLiteral("add_pushButton_2"));
        add_pushButton_2->setGeometry(QRect(20, 480, 115, 32));
        EditComputersWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditComputersWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        EditComputersWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditComputersWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EditComputersWindow->setStatusBar(statusbar);

        retranslateUi(EditComputersWindow);

        QMetaObject::connectSlotsByName(EditComputersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditComputersWindow)
    {
        EditComputersWindow->setWindowTitle(QApplication::translate("EditComputersWindow", "MainWindow", 0));
        add_label->setText(QApplication::translate("EditComputersWindow", "Add:", 0));
        name_label->setText(QApplication::translate("EditComputersWindow", "Name:", 0));
        type_label->setText(QApplication::translate("EditComputersWindow", "Type:", 0));
        editComputerList_label->setText(QApplication::translate("EditComputersWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Edit computer list</span></p></body></html>", 0));
        label->setText(QString());
        yearBuilt_label->setText(QApplication::translate("EditComputersWindow", "Year built:", 0));
        QTableWidgetItem *___qtablewidgetitem = computerList_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditComputersWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = computerList_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditComputersWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = computerList_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditComputersWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem3 = computerList_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditComputersWindow", "Built", 0));
        Built_label->setText(QApplication::translate("EditComputersWindow", "Built:", 0));
        close_pushButton->setText(QApplication::translate("EditComputersWindow", "Close", 0));
        removeSelected_pushButton->setText(QApplication::translate("EditComputersWindow", "Remove selected", 0));
        add_pushButton_2->setText(QApplication::translate("EditComputersWindow", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class EditComputersWindow: public Ui_EditComputersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOMPUTERSWINDOW_H
