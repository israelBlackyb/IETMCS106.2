#include "mainwindow.h"
#include "adminbookpage.h"
#include "loginpage.h"
#include "catalogue.h"

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

    Catalogue c;
    c.show();
    return a.exec();
}
