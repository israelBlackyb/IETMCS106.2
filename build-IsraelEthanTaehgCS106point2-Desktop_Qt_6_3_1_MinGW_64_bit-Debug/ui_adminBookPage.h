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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminBookPage
{
public:
    QWidget *centralwidget;
    QPushButton *EditBtn;
    QLabel *bookDesc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminBookPage)
    {
        if (AdminBookPage->objectName().isEmpty())
            AdminBookPage->setObjectName(QString::fromUtf8("AdminBookPage"));
        AdminBookPage->resize(800, 600);
        centralwidget = new QWidget(AdminBookPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EditBtn = new QPushButton(centralwidget);
        EditBtn->setObjectName(QString::fromUtf8("EditBtn"));
        EditBtn->setGeometry(QRect(380, 450, 80, 24));
        bookDesc = new QLabel(centralwidget);
        bookDesc->setObjectName(QString::fromUtf8("bookDesc"));
        bookDesc->setGeometry(QRect(280, 190, 49, 16));
        AdminBookPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminBookPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        EditBtn->setText(QCoreApplication::translate("AdminBookPage", "PushButton", nullptr));
        bookDesc->setText(QCoreApplication::translate("AdminBookPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminBookPage: public Ui_AdminBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBOOKPAGE_H
