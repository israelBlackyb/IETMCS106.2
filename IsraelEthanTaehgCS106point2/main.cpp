//#include "mainwindow.h"
//#include "adminbookpage.h"
//#include "addbook.h"
#include "catalogue.h"
#include "loginpage.h"

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

    Catalogue w;
    w.show();
    return a.exec();
}
