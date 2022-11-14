 #include "addbook.h"
#include "ui_addbook.h"
#include "filehandling.h"
#include "mainwindow.h"
#include "adminbookpage.h"

#include <QLabel>
#include <QBoxLayout>
#include <QVector>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextBrowser>

QVector<QLabel*> bookCoversList;
QVector<QTextBrowser*> bookInformation;

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);

    bookCatalogue = fHand.ReadFile("Books", 4);

//    for(int i=0; i<bookCatalogue.size();i++) {
//        QPixmap bookCover(bookCatalogue.at(i).at(0));
//        QLabel *labelPic = new QLabel(this);
//        labelPic->setPixmap(bookCover.scaled(200, 100, Qt::KeepAspectRatio));
//        bookCoversList.append(labelPic);

//        //ui->bookImage->addWidget(bookCoversList[i]); //this won't work as can't locate "addWidget"


//        //Book Info

//        QTextBrowser* info = new QTextBrowser(this);
//        info->setText(
//            "Title: " + bookCatalogue.at(i).at(1) + "\n" +
//            "Author: " + bookCatalogue.at(i).at(2) + "\n" +
//            "Description: "+ bookCatalogue.at(i).at(3) + "\n"
//            );
//        bookInformation.append(info);
//        ui->bookInfoVertLayout->addWidget(bookInformation[i]); //this won't work as can't locate "addWidget"

//        //iteration/entries checker
//        qDebug() << "iteration " << i;
//        if (i == bookCatalogue.length()-1){
//            qDebug() << i+1 << "book entries";
//        }


//    }

};

AddBook::~AddBook()
{
    delete ui;
}

void AddBook::on_home_clicked()
{
    MainWindow *mw;

    hide();
    mw = new MainWindow(this);
    mw->show();
}


void AddBook::on_editBook_clicked()
{
    AdminBookPage *abp;

    hide();
    abp= new AdminBookPage(this);
    abp->show();

}


//void AddBook::on_accountManager_clicked()
//{

//}


//void AddBook::on_addUser_clicked()
//{

//}

