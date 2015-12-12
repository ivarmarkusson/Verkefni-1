/********************************************************************************
** Form generated from reading UI file 'displaywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYWINDOW_H
#define UI_DISPLAYWINDOW_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tab_sci_com_conn;
    QWidget *tab_sci_main;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTabWidget *tab_sci_display_edit;
    QWidget *tab_sci_display;
    QTableWidget *table_display_sci;
    QLineEdit *line_search_sci;
    QWidget *tab_sci_edit;
    QGridLayout *gridLayout_6;
    QLineEdit *line_sci_birth_add_remove_edit;
    QLabel *label_6;
    QLineEdit *line_sci_death_add_remove_edit;
    QLineEdit *line_sci_gender_add_remove_edit;
    QPushButton *pushButton_add_sci;
    QTableWidget *table_edit_sci;
    QLabel *label_7;
    QLineEdit *line_sci_name_add_remove_edit;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_edit_sci;
    QPushButton *pushButton_remove_sci;
    QWidget *tab_com;
    QGridLayout *gridLayout_3;
    QTabWidget *tab_com_display_edit;
    QWidget *tab_com_display;
    QLineEdit *line_search_com;
    QTableWidget *table_display_com;
    QWidget *tab_com_edit;
    QGridLayout *gridLayout_7;
    QTableWidget *table_edit_com;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *line_com_name_add_remove_edit;
    QLineEdit *line_com_year_add_remove_edit;
    QLineEdit *line_com_type_add_remove_edit;
    QLineEdit *line_com_built_add_remove_edit;
    QPushButton *pushButton_com_add;
    QPushButton *pushButton_com_remove;
    QPushButton *pushButton_com_edit;
    QLabel *label_8;
    QWidget *tab_conn;
    QGridLayout *gridLayout_4;
    QTabWidget *tab_connect_display_edit;
    QWidget *tab_conn_display;
    QGridLayout *gridLayout_5;
    QLineEdit *line_connect_search;
    QTableWidget *table_display_connect;
    QWidget *tab_conn_edit;
    QGridLayout *gridLayout_8;
    QLineEdit *line_connect_sci_gender_edit;
    QTableWidget *table_edit_connect_com;
    QLabel *label_18;
    QLineEdit *line_connect_sci_death_edit;
    QLineEdit *line_connect_sci_name_edit;
    QLineEdit *line_connect_sci_birth_edit;
    QLabel *label_19;
    QLineEdit *line_connect_com_year_edit;
    QLineEdit *line_connect_com_type_edit;
    QLabel *label_17;
    QLabel *label_20;
    QLineEdit *line_connect_com_built_edit;
    QLineEdit *line_connect_com_name_edit;
    QPushButton *pushButton_connect;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_15;
    QTableWidget *table_edit_connect_sci;
    QLabel *label_3;
    QPushButton *pushButton_close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisplayWindow)
    {
        if (DisplayWindow->objectName().isEmpty())
            DisplayWindow->setObjectName(QStringLiteral("DisplayWindow"));
        DisplayWindow->resize(800, 600);
        centralwidget = new QWidget(DisplayWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tab_sci_com_conn = new QTabWidget(centralwidget);
        tab_sci_com_conn->setObjectName(QStringLiteral("tab_sci_com_conn"));
        tab_sci_com_conn->setEnabled(true);
        tab_sci_main = new QWidget();
        tab_sci_main->setObjectName(QStringLiteral("tab_sci_main"));
        gridLayout_2 = new QGridLayout(tab_sci_main);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(tab_sci_main);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        tab_sci_display_edit = new QTabWidget(tab_sci_main);
        tab_sci_display_edit->setObjectName(QStringLiteral("tab_sci_display_edit"));
        tab_sci_display = new QWidget();
        tab_sci_display->setObjectName(QStringLiteral("tab_sci_display"));
        table_display_sci = new QTableWidget(tab_sci_display);
        if (table_display_sci->columnCount() < 4)
            table_display_sci->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        table_display_sci->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        table_display_sci->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_display_sci->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_display_sci->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_display_sci->setObjectName(QStringLiteral("table_display_sci"));
        table_display_sci->setGeometry(QRect(0, 50, 771, 391));
        table_display_sci->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_display_sci->setAlternatingRowColors(false);
        table_display_sci->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_display_sci->setSortingEnabled(true);
        table_display_sci->horizontalHeader()->setStretchLastSection(true);
        line_search_sci = new QLineEdit(tab_sci_display);
        line_search_sci->setObjectName(QStringLiteral("line_search_sci"));
        line_search_sci->setGeometry(QRect(0, 10, 771, 31));
        tab_sci_display_edit->addTab(tab_sci_display, QString());
        tab_sci_edit = new QWidget();
        tab_sci_edit->setObjectName(QStringLiteral("tab_sci_edit"));
        gridLayout_6 = new QGridLayout(tab_sci_edit);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        line_sci_birth_add_remove_edit = new QLineEdit(tab_sci_edit);
        line_sci_birth_add_remove_edit->setObjectName(QStringLiteral("line_sci_birth_add_remove_edit"));

        gridLayout_6->addWidget(line_sci_birth_add_remove_edit, 2, 3, 1, 1);

        label_6 = new QLabel(tab_sci_edit);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 4, 1, 1);

        line_sci_death_add_remove_edit = new QLineEdit(tab_sci_edit);
        line_sci_death_add_remove_edit->setObjectName(QStringLiteral("line_sci_death_add_remove_edit"));

        gridLayout_6->addWidget(line_sci_death_add_remove_edit, 2, 4, 1, 1);

        line_sci_gender_add_remove_edit = new QLineEdit(tab_sci_edit);
        line_sci_gender_add_remove_edit->setObjectName(QStringLiteral("line_sci_gender_add_remove_edit"));

        gridLayout_6->addWidget(line_sci_gender_add_remove_edit, 2, 5, 1, 1);

        pushButton_add_sci = new QPushButton(tab_sci_edit);
        pushButton_add_sci->setObjectName(QStringLiteral("pushButton_add_sci"));

        gridLayout_6->addWidget(pushButton_add_sci, 3, 0, 1, 1);

        table_edit_sci = new QTableWidget(tab_sci_edit);
        if (table_edit_sci->columnCount() < 4)
            table_edit_sci->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_edit_sci->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_edit_sci->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_edit_sci->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_edit_sci->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        table_edit_sci->setObjectName(QStringLiteral("table_edit_sci"));

        gridLayout_6->addWidget(table_edit_sci, 0, 0, 1, 6);

        label_7 = new QLabel(tab_sci_edit);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 1, 5, 1, 1);

        line_sci_name_add_remove_edit = new QLineEdit(tab_sci_edit);
        line_sci_name_add_remove_edit->setObjectName(QStringLiteral("line_sci_name_add_remove_edit"));

        gridLayout_6->addWidget(line_sci_name_add_remove_edit, 2, 0, 1, 3);

        label_4 = new QLabel(tab_sci_edit);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(tab_sci_edit);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 1, 3, 1, 1);

        pushButton_edit_sci = new QPushButton(tab_sci_edit);
        pushButton_edit_sci->setObjectName(QStringLiteral("pushButton_edit_sci"));

        gridLayout_6->addWidget(pushButton_edit_sci, 3, 2, 1, 1);

        pushButton_remove_sci = new QPushButton(tab_sci_edit);
        pushButton_remove_sci->setObjectName(QStringLiteral("pushButton_remove_sci"));

        gridLayout_6->addWidget(pushButton_remove_sci, 3, 1, 1, 1);

        tab_sci_display_edit->addTab(tab_sci_edit, QString());

        gridLayout_2->addWidget(tab_sci_display_edit, 0, 0, 1, 1);

        tab_sci_com_conn->addTab(tab_sci_main, QString());
        tab_com = new QWidget();
        tab_com->setObjectName(QStringLiteral("tab_com"));
        gridLayout_3 = new QGridLayout(tab_com);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tab_com_display_edit = new QTabWidget(tab_com);
        tab_com_display_edit->setObjectName(QStringLiteral("tab_com_display_edit"));
        tab_com_display = new QWidget();
        tab_com_display->setObjectName(QStringLiteral("tab_com_display"));
        line_search_com = new QLineEdit(tab_com_display);
        line_search_com->setObjectName(QStringLiteral("line_search_com"));
        line_search_com->setGeometry(QRect(0, 10, 771, 31));
        table_display_com = new QTableWidget(tab_com_display);
        if (table_display_com->columnCount() < 4)
            table_display_com->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_display_com->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_display_com->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_display_com->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table_display_com->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        table_display_com->setObjectName(QStringLiteral("table_display_com"));
        table_display_com->setGeometry(QRect(0, 50, 771, 391));
        table_display_com->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_display_com->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_display_com->setSortingEnabled(true);
        table_display_com->horizontalHeader()->setStretchLastSection(true);
        tab_com_display_edit->addTab(tab_com_display, QString());
        tab_com_edit = new QWidget();
        tab_com_edit->setObjectName(QStringLiteral("tab_com_edit"));
        gridLayout_7 = new QGridLayout(tab_com_edit);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        table_edit_com = new QTableWidget(tab_com_edit);
        if (table_edit_com->columnCount() < 4)
            table_edit_com->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table_edit_com->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table_edit_com->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table_edit_com->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table_edit_com->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        table_edit_com->setObjectName(QStringLiteral("table_edit_com"));

        gridLayout_7->addWidget(table_edit_com, 0, 0, 1, 6);

        label_12 = new QLabel(tab_com_edit);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_7->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(tab_com_edit);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_7->addWidget(label_11, 1, 3, 1, 1);

        label_10 = new QLabel(tab_com_edit);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_7->addWidget(label_10, 1, 4, 1, 1);

        label_9 = new QLabel(tab_com_edit);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 1, 5, 1, 1);

        line_com_name_add_remove_edit = new QLineEdit(tab_com_edit);
        line_com_name_add_remove_edit->setObjectName(QStringLiteral("line_com_name_add_remove_edit"));

        gridLayout_7->addWidget(line_com_name_add_remove_edit, 2, 0, 1, 3);

        line_com_year_add_remove_edit = new QLineEdit(tab_com_edit);
        line_com_year_add_remove_edit->setObjectName(QStringLiteral("line_com_year_add_remove_edit"));

        gridLayout_7->addWidget(line_com_year_add_remove_edit, 2, 3, 1, 1);

        line_com_type_add_remove_edit = new QLineEdit(tab_com_edit);
        line_com_type_add_remove_edit->setObjectName(QStringLiteral("line_com_type_add_remove_edit"));

        gridLayout_7->addWidget(line_com_type_add_remove_edit, 2, 4, 1, 1);

        line_com_built_add_remove_edit = new QLineEdit(tab_com_edit);
        line_com_built_add_remove_edit->setObjectName(QStringLiteral("line_com_built_add_remove_edit"));

        gridLayout_7->addWidget(line_com_built_add_remove_edit, 2, 5, 1, 1);

        pushButton_com_add = new QPushButton(tab_com_edit);
        pushButton_com_add->setObjectName(QStringLiteral("pushButton_com_add"));

        gridLayout_7->addWidget(pushButton_com_add, 3, 0, 1, 1);

        pushButton_com_remove = new QPushButton(tab_com_edit);
        pushButton_com_remove->setObjectName(QStringLiteral("pushButton_com_remove"));

        gridLayout_7->addWidget(pushButton_com_remove, 3, 1, 1, 1);

        pushButton_com_edit = new QPushButton(tab_com_edit);
        pushButton_com_edit->setObjectName(QStringLiteral("pushButton_com_edit"));

        gridLayout_7->addWidget(pushButton_com_edit, 3, 2, 1, 1);

        tab_com_display_edit->addTab(tab_com_edit, QString());

        gridLayout_3->addWidget(tab_com_display_edit, 0, 0, 1, 1);

        label_8 = new QLabel(tab_com);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 1, 1, 1);

        tab_sci_com_conn->addTab(tab_com, QString());
        tab_conn = new QWidget();
        tab_conn->setObjectName(QStringLiteral("tab_conn"));
        gridLayout_4 = new QGridLayout(tab_conn);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tab_connect_display_edit = new QTabWidget(tab_conn);
        tab_connect_display_edit->setObjectName(QStringLiteral("tab_connect_display_edit"));
        tab_conn_display = new QWidget();
        tab_conn_display->setObjectName(QStringLiteral("tab_conn_display"));
        gridLayout_5 = new QGridLayout(tab_conn_display);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        line_connect_search = new QLineEdit(tab_conn_display);
        line_connect_search->setObjectName(QStringLiteral("line_connect_search"));

        gridLayout_5->addWidget(line_connect_search, 0, 0, 1, 1);

        table_display_connect = new QTableWidget(tab_conn_display);
        if (table_display_connect->columnCount() < 2)
            table_display_connect->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        table_display_connect->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table_display_connect->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        table_display_connect->setObjectName(QStringLiteral("table_display_connect"));
        table_display_connect->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_display_connect->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_display_connect->setSortingEnabled(true);
        table_display_connect->horizontalHeader()->setStretchLastSection(true);

        gridLayout_5->addWidget(table_display_connect, 1, 0, 1, 1);

        tab_connect_display_edit->addTab(tab_conn_display, QString());
        tab_conn_edit = new QWidget();
        tab_conn_edit->setObjectName(QStringLiteral("tab_conn_edit"));
        gridLayout_8 = new QGridLayout(tab_conn_edit);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        line_connect_sci_gender_edit = new QLineEdit(tab_conn_edit);
        line_connect_sci_gender_edit->setObjectName(QStringLiteral("line_connect_sci_gender_edit"));

        gridLayout_8->addWidget(line_connect_sci_gender_edit, 2, 3, 1, 1);

        table_edit_connect_com = new QTableWidget(tab_conn_edit);
        if (table_edit_connect_com->columnCount() < 4)
            table_edit_connect_com->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table_edit_connect_com->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table_edit_connect_com->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table_edit_connect_com->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table_edit_connect_com->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        table_edit_connect_com->setObjectName(QStringLiteral("table_edit_connect_com"));

        gridLayout_8->addWidget(table_edit_connect_com, 3, 0, 1, 4);

        label_18 = new QLabel(tab_conn_edit);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_8->addWidget(label_18, 4, 0, 1, 1);

        line_connect_sci_death_edit = new QLineEdit(tab_conn_edit);
        line_connect_sci_death_edit->setObjectName(QStringLiteral("line_connect_sci_death_edit"));

        gridLayout_8->addWidget(line_connect_sci_death_edit, 2, 2, 1, 1);

        line_connect_sci_name_edit = new QLineEdit(tab_conn_edit);
        line_connect_sci_name_edit->setObjectName(QStringLiteral("line_connect_sci_name_edit"));

        gridLayout_8->addWidget(line_connect_sci_name_edit, 2, 0, 1, 1);

        line_connect_sci_birth_edit = new QLineEdit(tab_conn_edit);
        line_connect_sci_birth_edit->setObjectName(QStringLiteral("line_connect_sci_birth_edit"));

        gridLayout_8->addWidget(line_connect_sci_birth_edit, 2, 1, 1, 1);

        label_19 = new QLabel(tab_conn_edit);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_8->addWidget(label_19, 4, 1, 1, 1);

        line_connect_com_year_edit = new QLineEdit(tab_conn_edit);
        line_connect_com_year_edit->setObjectName(QStringLiteral("line_connect_com_year_edit"));

        gridLayout_8->addWidget(line_connect_com_year_edit, 5, 1, 1, 1);

        line_connect_com_type_edit = new QLineEdit(tab_conn_edit);
        line_connect_com_type_edit->setObjectName(QStringLiteral("line_connect_com_type_edit"));

        gridLayout_8->addWidget(line_connect_com_type_edit, 5, 2, 1, 1);

        label_17 = new QLabel(tab_conn_edit);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_8->addWidget(label_17, 4, 3, 1, 1);

        label_20 = new QLabel(tab_conn_edit);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_8->addWidget(label_20, 4, 2, 1, 1);

        line_connect_com_built_edit = new QLineEdit(tab_conn_edit);
        line_connect_com_built_edit->setObjectName(QStringLiteral("line_connect_com_built_edit"));

        gridLayout_8->addWidget(line_connect_com_built_edit, 5, 3, 1, 1);

        line_connect_com_name_edit = new QLineEdit(tab_conn_edit);
        line_connect_com_name_edit->setObjectName(QStringLiteral("line_connect_com_name_edit"));

        gridLayout_8->addWidget(line_connect_com_name_edit, 5, 0, 1, 1);

        pushButton_connect = new QPushButton(tab_conn_edit);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));

        gridLayout_8->addWidget(pushButton_connect, 6, 0, 1, 1);

        label_14 = new QLabel(tab_conn_edit);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 1, 2, 1, 1);

        label_13 = new QLabel(tab_conn_edit);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_8->addWidget(label_13, 1, 3, 1, 1);

        label_16 = new QLabel(tab_conn_edit);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 1, 0, 1, 1);

        label_15 = new QLabel(tab_conn_edit);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_8->addWidget(label_15, 1, 1, 1, 1);

        table_edit_connect_sci = new QTableWidget(tab_conn_edit);
        if (table_edit_connect_sci->columnCount() < 4)
            table_edit_connect_sci->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        table_edit_connect_sci->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        table_edit_connect_sci->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        table_edit_connect_sci->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        table_edit_connect_sci->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        table_edit_connect_sci->setObjectName(QStringLiteral("table_edit_connect_sci"));

        gridLayout_8->addWidget(table_edit_connect_sci, 0, 0, 1, 4);

        tab_connect_display_edit->addTab(tab_conn_edit, QString());

        gridLayout_4->addWidget(tab_connect_display_edit, 0, 0, 1, 1);

        label_3 = new QLabel(tab_conn);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 0, 1, 1, 1);

        tab_sci_com_conn->addTab(tab_conn, QString());

        gridLayout->addWidget(tab_sci_com_conn, 1, 0, 1, 1);

        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        gridLayout->addWidget(pushButton_close, 2, 0, 1, 1);

        DisplayWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DisplayWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DisplayWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DisplayWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DisplayWindow->setStatusBar(statusbar);

        retranslateUi(DisplayWindow);

        tab_sci_com_conn->setCurrentIndex(2);
        tab_sci_display_edit->setCurrentIndex(0);
        tab_com_display_edit->setCurrentIndex(0);
        tab_connect_display_edit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DisplayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayWindow)
    {
        DisplayWindow->setWindowTitle(QApplication::translate("DisplayWindow", "MainWindow", 0));
        label->setText(QApplication::translate("DisplayWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\"><br/><br/>S</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">C</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">I</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">E</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">N</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">T</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">I</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">S</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">T</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">S</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = table_display_sci->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_display_sci->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DisplayWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_display_sci->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DisplayWindow", "Year of Death", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_display_sci->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DisplayWindow", "Gender", 0));
        line_search_sci->setPlaceholderText(QApplication::translate("DisplayWindow", "Search...", 0));
        tab_sci_display_edit->setTabText(tab_sci_display_edit->indexOf(tab_sci_display), QApplication::translate("DisplayWindow", "Display", 0));
        line_sci_birth_add_remove_edit->setText(QString());
        line_sci_birth_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Birth...", 0));
        label_6->setText(QApplication::translate("DisplayWindow", "Year of Death", 0));
        line_sci_death_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Death?...", 0));
        line_sci_gender_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Sex?...", 0));
        pushButton_add_sci->setText(QApplication::translate("DisplayWindow", "Add", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_edit_sci->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_edit_sci->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("DisplayWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_edit_sci->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("DisplayWindow", "Year of Death", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_edit_sci->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("DisplayWindow", "Gender", 0));
        label_7->setText(QApplication::translate("DisplayWindow", "Gender", 0));
        line_sci_name_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Full Name...", 0));
        label_4->setText(QApplication::translate("DisplayWindow", "Name", 0));
        label_5->setText(QApplication::translate("DisplayWindow", "Year of Birth", 0));
        pushButton_edit_sci->setText(QApplication::translate("DisplayWindow", "Edit", 0));
        pushButton_remove_sci->setText(QApplication::translate("DisplayWindow", "Remove", 0));
        tab_sci_display_edit->setTabText(tab_sci_display_edit->indexOf(tab_sci_edit), QApplication::translate("DisplayWindow", "Edit", 0));
        tab_sci_com_conn->setTabText(tab_sci_com_conn->indexOf(tab_sci_main), QApplication::translate("DisplayWindow", "Scientists", 0));
        line_search_com->setPlaceholderText(QApplication::translate("DisplayWindow", "Search...", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_display_com->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_display_com->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("DisplayWindow", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem10 = table_display_com->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("DisplayWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem11 = table_display_com->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("DisplayWindow", "Built", 0));
        tab_com_display_edit->setTabText(tab_com_display_edit->indexOf(tab_com_display), QApplication::translate("DisplayWindow", "Display", 0));
        QTableWidgetItem *___qtablewidgetitem12 = table_edit_com->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem13 = table_edit_com->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("DisplayWindow", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem14 = table_edit_com->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("DisplayWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem15 = table_edit_com->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("DisplayWindow", "Built", 0));
        label_12->setText(QApplication::translate("DisplayWindow", "Name", 0));
        label_11->setText(QApplication::translate("DisplayWindow", "Build Year", 0));
        label_10->setText(QApplication::translate("DisplayWindow", "Type", 0));
        label_9->setText(QApplication::translate("DisplayWindow", "Built?", 0));
        line_com_name_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Computer Name...", 0));
        line_com_year_add_remove_edit->setText(QString());
        line_com_year_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Year...", 0));
        line_com_type_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Type...", 0));
        line_com_built_add_remove_edit->setText(QString());
        line_com_built_add_remove_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Yes/No", 0));
        pushButton_com_add->setText(QApplication::translate("DisplayWindow", "Add", 0));
        pushButton_com_remove->setText(QApplication::translate("DisplayWindow", "Remove", 0));
        pushButton_com_edit->setText(QApplication::translate("DisplayWindow", "Edit", 0));
        tab_com_display_edit->setTabText(tab_com_display_edit->indexOf(tab_com_edit), QApplication::translate("DisplayWindow", "Edit", 0));
        label_8->setText(QApplication::translate("DisplayWindow", "<html><head/><body><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">C</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">O</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">M</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">P</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">U</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">T</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">E</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">R</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">S</span></p></body></html>", 0));
        tab_sci_com_conn->setTabText(tab_sci_com_conn->indexOf(tab_com), QApplication::translate("DisplayWindow", "Computers", 0));
        line_connect_search->setPlaceholderText(QApplication::translate("DisplayWindow", "Search...", 0));
        QTableWidgetItem *___qtablewidgetitem16 = table_display_connect->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("DisplayWindow", "Scientist Name", 0));
        QTableWidgetItem *___qtablewidgetitem17 = table_display_connect->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("DisplayWindow", "Computer Name", 0));
        tab_connect_display_edit->setTabText(tab_connect_display_edit->indexOf(tab_conn_display), QApplication::translate("DisplayWindow", "Display", 0));
        line_connect_sci_gender_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Sex?...", 0));
        QTableWidgetItem *___qtablewidgetitem18 = table_edit_connect_com->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem19 = table_edit_connect_com->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("DisplayWindow", "Build Year", 0));
        QTableWidgetItem *___qtablewidgetitem20 = table_edit_connect_com->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("DisplayWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem21 = table_edit_connect_com->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("DisplayWindow", "Built", 0));
        label_18->setText(QApplication::translate("DisplayWindow", "Computer Name", 0));
        line_connect_sci_death_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Death?...", 0));
        line_connect_sci_name_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Full Name...", 0));
        line_connect_sci_birth_edit->setText(QString());
        line_connect_sci_birth_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Birth...", 0));
        label_19->setText(QApplication::translate("DisplayWindow", "Build Year", 0));
        line_connect_com_year_edit->setText(QString());
        line_connect_com_year_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Year...", 0));
        line_connect_com_type_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Type...", 0));
        label_17->setText(QApplication::translate("DisplayWindow", "Built?", 0));
        label_20->setText(QApplication::translate("DisplayWindow", "Type", 0));
        line_connect_com_built_edit->setText(QString());
        line_connect_com_built_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Yes/No", 0));
        line_connect_com_name_edit->setPlaceholderText(QApplication::translate("DisplayWindow", "Enter Computer Name...", 0));
        pushButton_connect->setText(QApplication::translate("DisplayWindow", "Connect", 0));
        label_14->setText(QApplication::translate("DisplayWindow", "Year of Death", 0));
        label_13->setText(QApplication::translate("DisplayWindow", "Gender", 0));
        label_16->setText(QApplication::translate("DisplayWindow", "Scientists Name", 0));
        label_15->setText(QApplication::translate("DisplayWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem22 = table_edit_connect_sci->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("DisplayWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem23 = table_edit_connect_sci->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("DisplayWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem24 = table_edit_connect_sci->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("DisplayWindow", "Year of Death", 0));
        QTableWidgetItem *___qtablewidgetitem25 = table_edit_connect_sci->horizontalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("DisplayWindow", "Gender", 0));
        tab_connect_display_edit->setTabText(tab_connect_display_edit->indexOf(tab_conn_edit), QApplication::translate("DisplayWindow", "Edit", 0));
        label_3->setText(QApplication::translate("DisplayWindow", "<html><head/><body><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">C</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">O</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">N</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">N</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">E</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">C</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">T</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">I</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">O</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">N</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">S</span><span style=\" font-size:10pt;\"><br/></span></p><p align=\"center\"><span styl"
                        "e=\" font-size:10pt;\"><br/></span></p></body></html>", 0));
        tab_sci_com_conn->setTabText(tab_sci_com_conn->indexOf(tab_conn), QApplication::translate("DisplayWindow", "Connections", 0));
        pushButton_close->setText(QApplication::translate("DisplayWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayWindow: public Ui_DisplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYWINDOW_H
