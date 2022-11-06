/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *NavBar;
    QSpacerItem *horizontalSpacer_5;
    QLabel *IconH;
    QPushButton *homeButton;
    QLabel *IconG;
    QPushButton *genresButton;
    QLabel *IconP;
    QPushButton *popularButton;
    QLabel *IconR;
    QPushButton *reservesButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *labelA;
    QPushButton *AccountButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Title;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *searchBar;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_14;
    QLabel *Book1;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Book2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *Book3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *Book4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *Book5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *Book6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *Book7;
    QSpacerItem *horizontalSpacer_12;
    QLabel *Book8;
    QSpacerItem *horizontalSpacer_13;
    QSlider *bookScroller;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 511);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        NavBar = new QHBoxLayout();
        NavBar->setObjectName(QString::fromUtf8("NavBar"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer_5);

        IconH = new QLabel(centralwidget);
        IconH->setObjectName(QString::fromUtf8("IconH"));
        IconH->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(IconH);

        homeButton = new QPushButton(centralwidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(homeButton);

        IconG = new QLabel(centralwidget);
        IconG->setObjectName(QString::fromUtf8("IconG"));
        IconG->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(IconG);

        genresButton = new QPushButton(centralwidget);
        genresButton->setObjectName(QString::fromUtf8("genresButton"));
        genresButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(genresButton);

        IconP = new QLabel(centralwidget);
        IconP->setObjectName(QString::fromUtf8("IconP"));
        IconP->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(IconP);

        popularButton = new QPushButton(centralwidget);
        popularButton->setObjectName(QString::fromUtf8("popularButton"));
        popularButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(popularButton);

        IconR = new QLabel(centralwidget);
        IconR->setObjectName(QString::fromUtf8("IconR"));
        IconR->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(IconR);

        reservesButton = new QPushButton(centralwidget);
        reservesButton->setObjectName(QString::fromUtf8("reservesButton"));
        reservesButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(reservesButton);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        NavBar->addItem(verticalSpacer_2);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer);

        labelA = new QLabel(centralwidget);
        labelA->setObjectName(QString::fromUtf8("labelA"));
        labelA->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(labelA);

        AccountButton = new QPushButton(centralwidget);
        AccountButton->setObjectName(QString::fromUtf8("AccountButton"));
        AccountButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(AccountButton);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(NavBar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        QFont font;
        font.setPointSize(22);
        Title->setFont(font);
        Title->setScaledContents(false);
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Title);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        searchBar = new QLineEdit(centralwidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(searchBar);

        horizontalSpacer_4 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(740, 205));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 738, 203));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 200));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1478, 202));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        Book1 = new QLabel(widget);
        Book1->setObjectName(QString::fromUtf8("Book1"));
        Book1->setMinimumSize(QSize(150, 200));
        Book1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        Book2 = new QLabel(widget);
        Book2->setObjectName(QString::fromUtf8("Book2"));
        Book2->setMinimumSize(QSize(150, 200));
        Book2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book2);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        Book3 = new QLabel(widget);
        Book3->setObjectName(QString::fromUtf8("Book3"));
        Book3->setMinimumSize(QSize(150, 200));
        Book3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book3);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        Book4 = new QLabel(widget);
        Book4->setObjectName(QString::fromUtf8("Book4"));
        Book4->setMinimumSize(QSize(150, 200));
        Book4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book4);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        Book5 = new QLabel(widget);
        Book5->setObjectName(QString::fromUtf8("Book5"));
        Book5->setMinimumSize(QSize(150, 200));
        Book5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book5);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        Book6 = new QLabel(widget);
        Book6->setObjectName(QString::fromUtf8("Book6"));
        Book6->setMinimumSize(QSize(150, 200));
        Book6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book6);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        Book7 = new QLabel(widget);
        Book7->setObjectName(QString::fromUtf8("Book7"));
        Book7->setMinimumSize(QSize(150, 200));
        Book7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book7);

        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        Book8 = new QLabel(widget);
        Book8->setObjectName(QString::fromUtf8("Book8"));
        Book8->setMinimumSize(QSize(150, 200));
        Book8->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book8);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        bookScroller = new QSlider(centralwidget);
        bookScroller->setObjectName(QString::fromUtf8("bookScroller"));
        bookScroller->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(bookScroller);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 760, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        IconH->setText(QCoreApplication::translate("MainWindow", "IconH", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        IconG->setText(QCoreApplication::translate("MainWindow", "IconG", nullptr));
        genresButton->setText(QCoreApplication::translate("MainWindow", "Genres", nullptr));
        IconP->setText(QCoreApplication::translate("MainWindow", "IconP", nullptr));
        popularButton->setText(QCoreApplication::translate("MainWindow", "Popular", nullptr));
        IconR->setText(QCoreApplication::translate("MainWindow", "IconR", nullptr));
        reservesButton->setText(QCoreApplication::translate("MainWindow", "Reserves", nullptr));
        labelA->setText(QCoreApplication::translate("MainWindow", "IconA", nullptr));
        AccountButton->setText(QCoreApplication::translate("MainWindow", "Login/Register", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Welcome to 106 Library system", nullptr));
        searchBar->setText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        Book1->setText(QCoreApplication::translate("MainWindow", "Book1", nullptr));
        Book2->setText(QCoreApplication::translate("MainWindow", "Book2", nullptr));
        Book3->setText(QCoreApplication::translate("MainWindow", "Book3", nullptr));
        Book4->setText(QCoreApplication::translate("MainWindow", "book4", nullptr));
        Book5->setText(QCoreApplication::translate("MainWindow", "Book5", nullptr));
        Book6->setText(QCoreApplication::translate("MainWindow", "Book6", nullptr));
        Book7->setText(QCoreApplication::translate("MainWindow", "Book7", nullptr));
        Book8->setText(QCoreApplication::translate("MainWindow", "Book8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
