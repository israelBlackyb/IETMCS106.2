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
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *Book5;
    QLabel *Book4;
    QLabel *Book3;
    QLabel *Book2;
    QLabel *Book1;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(757, 482);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        NavBar = new QHBoxLayout();
        NavBar->setObjectName(QString::fromUtf8("NavBar"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer_5);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(label_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(pushButton_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(label_3);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(pushButton_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(label_4);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Maximum);

        NavBar->addItem(verticalSpacer_2);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(label_5);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(16777215, 50));

        NavBar->addWidget(pushButton_5);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        NavBar->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(NavBar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_4 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Book5 = new QLabel(centralwidget);
        Book5->setObjectName(QString::fromUtf8("Book5"));
        Book5->setMinimumSize(QSize(0, 200));
        Book5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book5);

        Book4 = new QLabel(centralwidget);
        Book4->setObjectName(QString::fromUtf8("Book4"));
        Book4->setMinimumSize(QSize(0, 200));
        Book4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book4);

        Book3 = new QLabel(centralwidget);
        Book3->setObjectName(QString::fromUtf8("Book3"));
        Book3->setMinimumSize(QSize(0, 200));
        Book3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book3);

        Book2 = new QLabel(centralwidget);
        Book2->setObjectName(QString::fromUtf8("Book2"));
        Book2->setMinimumSize(QSize(0, 200));
        Book2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book2);

        Book1 = new QLabel(centralwidget);
        Book1->setObjectName(QString::fromUtf8("Book1"));
        Book1->setMinimumSize(QSize(0, 200));
        Book1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Book1);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "IconH", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IconG", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Genres", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IconP", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Popular", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "IconR", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reserves", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "IconA", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Login/Register", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Welcome to 106 Library system", nullptr));
        Book5->setText(QCoreApplication::translate("MainWindow", "Book5", nullptr));
        Book4->setText(QCoreApplication::translate("MainWindow", "book4", nullptr));
        Book3->setText(QCoreApplication::translate("MainWindow", "Book3", nullptr));
        Book2->setText(QCoreApplication::translate("MainWindow", "Book2", nullptr));
        Book1->setText(QCoreApplication::translate("MainWindow", "Book1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
