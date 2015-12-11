/********************************************************************************
** Form generated from reading UI file 'displayscientistswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSCIENTISTSWINDOW_H
#define UI_DISPLAYSCIENTISTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayScientistsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *displayTable_tableWidget;
    QLabel *label;
    QPushButton *display_pushButton;
    QComboBox *values_comboBox;
    QLabel *label_2;
    QCheckBox *decending_checkBox;
    QCheckBox *acending_checkBox;
    QPushButton *back_pushButton;
    QPushButton *close_pushButton;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisplayScientistsWindow)
    {
        if (DisplayScientistsWindow->objectName().isEmpty())
            DisplayScientistsWindow->setObjectName(QStringLiteral("DisplayScientistsWindow"));
        DisplayScientistsWindow->resize(584, 600);
        centralwidget = new QWidget(DisplayScientistsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        displayTable_tableWidget = new QTableWidget(centralwidget);
        if (displayTable_tableWidget->columnCount() < 4)
            displayTable_tableWidget->setColumnCount(4);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        displayTable_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        displayTable_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        displayTable_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        displayTable_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        displayTable_tableWidget->setObjectName(QStringLiteral("displayTable_tableWidget"));
        displayTable_tableWidget->setMaximumSize(QSize(531, 16777215));

        gridLayout->addWidget(displayTable_tableWidget, 7, 0, 1, 5);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 5);

        display_pushButton = new QPushButton(centralwidget);
        display_pushButton->setObjectName(QStringLiteral("display_pushButton"));

        gridLayout->addWidget(display_pushButton, 8, 0, 1, 1);

        values_comboBox = new QComboBox(centralwidget);
        values_comboBox->setObjectName(QStringLiteral("values_comboBox"));

        gridLayout->addWidget(values_comboBox, 3, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        decending_checkBox = new QCheckBox(centralwidget);
        decending_checkBox->setObjectName(QStringLiteral("decending_checkBox"));

        gridLayout->addWidget(decending_checkBox, 3, 2, 1, 1);

        acending_checkBox = new QCheckBox(centralwidget);
        acending_checkBox->setObjectName(QStringLiteral("acending_checkBox"));

        gridLayout->addWidget(acending_checkBox, 1, 2, 1, 1);

        back_pushButton = new QPushButton(centralwidget);
        back_pushButton->setObjectName(QStringLiteral("back_pushButton"));

        gridLayout->addWidget(back_pushButton, 8, 1, 1, 1);

        close_pushButton = new QPushButton(centralwidget);
        close_pushButton->setObjectName(QStringLiteral("close_pushButton"));

        gridLayout->addWidget(close_pushButton, 8, 4, 1, 1);

        DisplayScientistsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DisplayScientistsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 584, 21));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QStringLiteral("menuHello"));
        DisplayScientistsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DisplayScientistsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DisplayScientistsWindow->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());

        retranslateUi(DisplayScientistsWindow);

        QMetaObject::connectSlotsByName(DisplayScientistsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayScientistsWindow)
    {
        DisplayScientistsWindow->setWindowTitle(QApplication::translate("DisplayScientistsWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = displayTable_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DisplayScientistsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayTable_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DisplayScientistsWindow", "Year Born", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayTable_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DisplayScientistsWindow", "Year Of Death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayTable_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DisplayScientistsWindow", "Gender", 0));
        label->setText(QApplication::translate("DisplayScientistsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">DISPLAY COMPUTER SCIENTISTS</span></p><p align=\"center\"><br/></p></body></html>", 0));
        display_pushButton->setText(QApplication::translate("DisplayScientistsWindow", "DISPLAY", 0));
        values_comboBox->clear();
        values_comboBox->insertItems(0, QStringList()
         << QApplication::translate("DisplayScientistsWindow", "Name", 0)
         << QApplication::translate("DisplayScientistsWindow", "Gender", 0)
         << QApplication::translate("DisplayScientistsWindow", "Year Of Birth", 0)
         << QApplication::translate("DisplayScientistsWindow", "Year Of Death", 0)
        );
        label_2->setText(QApplication::translate("DisplayScientistsWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Sorted by:</span></p></body></html>", 0));
        decending_checkBox->setText(QApplication::translate("DisplayScientistsWindow", "Decending Order", 0));
        acending_checkBox->setText(QApplication::translate("DisplayScientistsWindow", "Acending Order", 0));
        back_pushButton->setText(QApplication::translate("DisplayScientistsWindow", "Back", 0));
        close_pushButton->setText(QApplication::translate("DisplayScientistsWindow", "Close", 0));
        menuHello->setTitle(QApplication::translate("DisplayScientistsWindow", "Display Computer Scientists", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayScientistsWindow: public Ui_DisplayScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSCIENTISTSWINDOW_H
