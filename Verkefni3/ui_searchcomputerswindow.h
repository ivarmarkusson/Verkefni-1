/********************************************************************************
** Form generated from reading UI file 'searchcomputerswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCOMPUTERSWINDOW_H
#define UI_SEARCHCOMPUTERSWINDOW_H

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

class Ui_SearchComputersWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *search_computers_label;
    QComboBox *search_computer_by_comboBox;
    QLineEdit *input_search_text;
    QPushButton *search_computers_Button;
    QTableWidget *display_computers_table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchComputersWindow)
    {
        if (SearchComputersWindow->objectName().isEmpty())
            SearchComputersWindow->setObjectName(QStringLiteral("SearchComputersWindow"));
        SearchComputersWindow->resize(800, 600);
        centralwidget = new QWidget(SearchComputersWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        search_computers_label = new QLabel(centralwidget);
        search_computers_label->setObjectName(QStringLiteral("search_computers_label"));

        gridLayout->addWidget(search_computers_label, 0, 0, 1, 1);

        search_computer_by_comboBox = new QComboBox(centralwidget);
        search_computer_by_comboBox->setObjectName(QStringLiteral("search_computer_by_comboBox"));

        gridLayout->addWidget(search_computer_by_comboBox, 1, 0, 1, 1);

        input_search_text = new QLineEdit(centralwidget);
        input_search_text->setObjectName(QStringLiteral("input_search_text"));

        gridLayout->addWidget(input_search_text, 2, 0, 1, 1);

        search_computers_Button = new QPushButton(centralwidget);
        search_computers_Button->setObjectName(QStringLiteral("search_computers_Button"));

        gridLayout->addWidget(search_computers_Button, 3, 0, 1, 1);

        display_computers_table = new QTableWidget(centralwidget);
        if (display_computers_table->columnCount() < 4)
            display_computers_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        display_computers_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        display_computers_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        display_computers_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        display_computers_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        display_computers_table->setObjectName(QStringLiteral("display_computers_table"));

        gridLayout->addWidget(display_computers_table, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        SearchComputersWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchComputersWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        SearchComputersWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchComputersWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchComputersWindow->setStatusBar(statusbar);

        retranslateUi(SearchComputersWindow);

        QMetaObject::connectSlotsByName(SearchComputersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchComputersWindow)
    {
        SearchComputersWindow->setWindowTitle(QApplication::translate("SearchComputersWindow", "MainWindow", 0));
        search_computers_label->setText(QApplication::translate("SearchComputersWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">SEARCH COMPUTERS</span></p></body></html>", 0));
        search_computer_by_comboBox->clear();
        search_computer_by_comboBox->insertItems(0, QStringList()
         << QApplication::translate("SearchComputersWindow", "By Name", 0)
         << QApplication::translate("SearchComputersWindow", "By Year", 0)
         << QApplication::translate("SearchComputersWindow", "By Type", 0)
         << QApplication::translate("SearchComputersWindow", "If Built", 0)
        );
        input_search_text->setText(QString());
        search_computers_Button->setText(QApplication::translate("SearchComputersWindow", "Search", 0));
        QTableWidgetItem *___qtablewidgetitem = display_computers_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchComputersWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = display_computers_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchComputersWindow", "Year Built", 0));
        QTableWidgetItem *___qtablewidgetitem2 = display_computers_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchComputersWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem3 = display_computers_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchComputersWindow", "If Built", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchComputersWindow: public Ui_SearchComputersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCOMPUTERSWINDOW_H
