/********************************************************************************
** Form generated from reading UI file 'adminbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINBOOKPAGE_H
#define UI_ADMINBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminBookPage
{
public:
    QWidget *centralwidget;
    QPushButton *EditBtn;
    QLabel *bookDesc;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *homeBtn;
    QLabel *label_2;
    QPushButton *genreBtn;
    QLabel *label_3;
    QPushButton *popularBtn;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminBookPage)
    {
        if (AdminBookPage->objectName().isEmpty())
            AdminBookPage->setObjectName(QString::fromUtf8("AdminBookPage"));
        AdminBookPage->resize(763, 780);
        centralwidget = new QWidget(AdminBookPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EditBtn = new QPushButton(centralwidget);
        EditBtn->setObjectName(QString::fromUtf8("EditBtn"));
        EditBtn->setGeometry(QRect(440, 610, 80, 24));
        bookDesc = new QLabel(centralwidget);
        bookDesc->setObjectName(QString::fromUtf8("bookDesc"));
        bookDesc->setGeometry(QRect(160, 610, 291, 16));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 761, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        homeBtn = new QPushButton(horizontalLayoutWidget);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));

        horizontalLayout->addWidget(homeBtn);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        genreBtn = new QPushButton(horizontalLayoutWidget);
        genreBtn->setObjectName(QString::fromUtf8("genreBtn"));

        horizontalLayout->addWidget(genreBtn);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        popularBtn = new QPushButton(horizontalLayoutWidget);
        popularBtn->setObjectName(QString::fromUtf8("popularBtn"));

        horizontalLayout->addWidget(popularBtn);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        AdminBookPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminBookPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 763, 21));
        AdminBookPage->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminBookPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminBookPage->setStatusBar(statusbar);

        retranslateUi(AdminBookPage);

        QMetaObject::connectSlotsByName(AdminBookPage);
    } // setupUi

    void retranslateUi(QMainWindow *AdminBookPage)
    {
        AdminBookPage->setWindowTitle(QCoreApplication::translate("AdminBookPage", "MainWindow", nullptr));
        EditBtn->setText(QCoreApplication::translate("AdminBookPage", "Edit", nullptr));
        bookDesc->setText(QCoreApplication::translate("AdminBookPage", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("AdminBookPage", "IconH", nullptr));
        homeBtn->setText(QCoreApplication::translate("AdminBookPage", "Home", nullptr));
        label_2->setText(QCoreApplication::translate("AdminBookPage", "IconG", nullptr));
        genreBtn->setText(QCoreApplication::translate("AdminBookPage", "Genres", nullptr));
        label_3->setText(QCoreApplication::translate("AdminBookPage", "IconP", nullptr));
        popularBtn->setText(QCoreApplication::translate("AdminBookPage", "Popular", nullptr));
        label_4->setText(QCoreApplication::translate("AdminBookPage", "IconR", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AdminBookPage", "Reserves", nullptr));
        label_5->setText(QCoreApplication::translate("AdminBookPage", "IconA", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AdminBookPage", "Register/Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminBookPage: public Ui_AdminBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBOOKPAGE_H
