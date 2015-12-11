/********************************************************************************
** Form generated from reading UI file 'searchscientistswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSCIENTISTSWINDOW_H
#define UI_SEARCHSCIENTISTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_SearchScientistsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *scientist_label;
    QComboBox *search_scientist_by_comboBox;
    QLineEdit *input_search_scientist_text;
    QPushButton *search_scientist_Button;
    QTableWidget *display_scientist_table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchScientistsWindow)
    {
        if (SearchScientistsWindow->objectName().isEmpty())
            SearchScientistsWindow->setObjectName(QStringLiteral("SearchScientistsWindow"));
        SearchScientistsWindow->resize(800, 600);
        centralwidget = new QWidget(SearchScientistsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scientist_label = new QLabel(centralwidget);
        scientist_label->setObjectName(QStringLiteral("scientist_label"));

        gridLayout->addWidget(scientist_label, 0, 0, 1, 1);

        search_scientist_by_comboBox = new QComboBox(centralwidget);
        search_scientist_by_comboBox->setObjectName(QStringLiteral("search_scientist_by_comboBox"));

        gridLayout->addWidget(search_scientist_by_comboBox, 1, 0, 1, 1);

        input_search_scientist_text = new QLineEdit(centralwidget);
        input_search_scientist_text->setObjectName(QStringLiteral("input_search_scientist_text"));

        gridLayout->addWidget(input_search_scientist_text, 2, 0, 1, 1);

        search_scientist_Button = new QPushButton(centralwidget);
        search_scientist_Button->setObjectName(QStringLiteral("search_scientist_Button"));

        gridLayout->addWidget(search_scientist_Button, 3, 0, 1, 1);

        display_scientist_table = new QTableWidget(centralwidget);
        if (display_scientist_table->columnCount() < 4)
            display_scientist_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        display_scientist_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        display_scientist_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        display_scientist_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        display_scientist_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        display_scientist_table->setObjectName(QStringLiteral("display_scientist_table"));

        gridLayout->addWidget(display_scientist_table, 4, 0, 1, 1);

        SearchScientistsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchScientistsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        SearchScientistsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchScientistsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchScientistsWindow->setStatusBar(statusbar);

        retranslateUi(SearchScientistsWindow);

        QMetaObject::connectSlotsByName(SearchScientistsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchScientistsWindow)
    {
        SearchScientistsWindow->setWindowTitle(QApplication::translate("SearchScientistsWindow", "MainWindow", 0));
        scientist_label->setText(QApplication::translate("SearchScientistsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">SEARCH SCIENTISTS</span></p></body></html>", 0));
        search_scientist_by_comboBox->clear();
        search_scientist_by_comboBox->insertItems(0, QStringList()
         << QApplication::translate("SearchScientistsWindow", "By Name", 0)
         << QApplication::translate("SearchScientistsWindow", "Date of Birth", 0)
         << QApplication::translate("SearchScientistsWindow", "Date of Death", 0)
         << QApplication::translate("SearchScientistsWindow", "Gender", 0)
        );
        input_search_scientist_text->setText(QString());
        search_scientist_Button->setText(QApplication::translate("SearchScientistsWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = display_scientist_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchScientistsWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = display_scientist_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchScientistsWindow", "Date of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem2 = display_scientist_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchScientistsWindow", "Date of Death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = display_scientist_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchScientistsWindow", "Gender", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchScientistsWindow: public Ui_SearchScientistsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSCIENTISTSWINDOW_H
