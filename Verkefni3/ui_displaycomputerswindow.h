/********************************************************************************
** Form generated from reading UI file 'displaycomputerswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYCOMPUTERSWINDOW_H
#define UI_DISPLAYCOMPUTERSWINDOW_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayComputersWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *acending_checkBox;
    QComboBox *values_comboBox;
    QCheckBox *decending_checkBox;
    QTableWidget *displayTable_tableWidget;
    QPushButton *display_pushButton;
    QPushButton *back_pushButton;
    QPushButton *close_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisplayComputersWindow)
    {
        if (DisplayComputersWindow->objectName().isEmpty())
            DisplayComputersWindow->setObjectName(QStringLiteral("DisplayComputersWindow"));
        DisplayComputersWindow->resize(800, 600);
        centralwidget = new QWidget(DisplayComputersWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 2, 2, 1);

        acending_checkBox = new QCheckBox(centralwidget);
        acending_checkBox->setObjectName(QStringLiteral("acending_checkBox"));

        gridLayout->addWidget(acending_checkBox, 2, 3, 1, 1);

        values_comboBox = new QComboBox(centralwidget);
        values_comboBox->setObjectName(QStringLiteral("values_comboBox"));

        gridLayout->addWidget(values_comboBox, 3, 0, 1, 1);

        decending_checkBox = new QCheckBox(centralwidget);
        decending_checkBox->setObjectName(QStringLiteral("decending_checkBox"));

        gridLayout->addWidget(decending_checkBox, 3, 3, 1, 1);

        displayTable_tableWidget = new QTableWidget(centralwidget);
        if (displayTable_tableWidget->columnCount() < 4)
            displayTable_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayTable_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayTable_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayTable_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displayTable_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        displayTable_tableWidget->setObjectName(QStringLiteral("displayTable_tableWidget"));

        gridLayout->addWidget(displayTable_tableWidget, 4, 0, 1, 4);

        display_pushButton = new QPushButton(centralwidget);
        display_pushButton->setObjectName(QStringLiteral("display_pushButton"));

        gridLayout->addWidget(display_pushButton, 5, 0, 1, 1);

        back_pushButton = new QPushButton(centralwidget);
        back_pushButton->setObjectName(QStringLiteral("back_pushButton"));

        gridLayout->addWidget(back_pushButton, 5, 1, 1, 1);

        close_pushButton = new QPushButton(centralwidget);
        close_pushButton->setObjectName(QStringLiteral("close_pushButton"));

        gridLayout->addWidget(close_pushButton, 5, 3, 1, 1);

        DisplayComputersWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DisplayComputersWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        DisplayComputersWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DisplayComputersWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DisplayComputersWindow->setStatusBar(statusbar);

        retranslateUi(DisplayComputersWindow);

        QMetaObject::connectSlotsByName(DisplayComputersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayComputersWindow)
    {
        DisplayComputersWindow->setWindowTitle(QApplication::translate("DisplayComputersWindow", "MainWindow", 0));
        label->setText(QApplication::translate("DisplayComputersWindow", "DISPLAY COMPUTERS", 0));
        label_2->setText(QApplication::translate("DisplayComputersWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">DISPLAY COMPUTERS</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("DisplayComputersWindow", "Sorted by:", 0));
        acending_checkBox->setText(QApplication::translate("DisplayComputersWindow", "Acending Order", 0));
        values_comboBox->clear();
        values_comboBox->insertItems(0, QStringList()
         << QApplication::translate("DisplayComputersWindow", "Name", 0)
         << QApplication::translate("DisplayComputersWindow", "Type", 0)
         << QApplication::translate("DisplayComputersWindow", "Year built", 0)
         << QApplication::translate("DisplayComputersWindow", "Built", 0)
        );
        decending_checkBox->setText(QApplication::translate("DisplayComputersWindow", "Decending Order", 0));
        QTableWidgetItem *___qtablewidgetitem = displayTable_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DisplayComputersWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayTable_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DisplayComputersWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayTable_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DisplayComputersWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayTable_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DisplayComputersWindow", "Built", 0));
        display_pushButton->setText(QApplication::translate("DisplayComputersWindow", "Display", 0));
        back_pushButton->setText(QApplication::translate("DisplayComputersWindow", "Back", 0));
        close_pushButton->setText(QApplication::translate("DisplayComputersWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayComputersWindow: public Ui_DisplayComputersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYCOMPUTERSWINDOW_H
