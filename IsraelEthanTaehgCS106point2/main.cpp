#include "mainwindow.h"
#include "adminbookpage.h"
<<<<<<< HEAD
#include "loginpage.h"
=======
>>>>>>> Taehg

#include <QApplication>
#include <QString>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile(":/styles/styleSheet.qss.txt");
    styleFile.open(QFile::ReadOnly);

    QString style(styleFile.readAll());
    a.setStyleSheet(style);

    LoginPage w;
    w.show();
    return a.exec();
}
