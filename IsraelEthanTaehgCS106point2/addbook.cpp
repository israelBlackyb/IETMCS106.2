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
#include <QMessageBox>

#include <QDialog>
#include <QFileDialog>

QVector<QLabel*> bookCoversList;
QVector<QTextBrowser*> bookInformation;

AddBook::AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddBook)
{
    ui->setupUi(this);

    bookCatalogue = fHand.ReadFile("Books", 4);

   for(int i=0; i<bookCatalogue.size();i++) {
        QPixmap bookCover(bookCatalogue.at(i).at(0));
        QLabel *labelPic = new QLabel(this);
        labelPic->setPixmap(bookCover.scaled(200, 100, Qt::KeepAspectRatio));
        bookCoversList.append(labelPic);

        //ui->bookImage->QWidget(bookCoversList[i]); //this won't work as can't locate "addWidget

        //Book Info

        QTextBrowser* info = new QTextBrowser(this);
       info->setText(
          "Title: " + bookCatalogue.at(i).at(1) + "\n" +
           "Author: " + bookCatalogue.at(i).at(2) + "\n" +
            "Description: "+ bookCatalogue.at(i).at(3) + "\n"
          );
      bookInformation.append(info);
       ui->verticalLayout_3->addWidget(bookInformation[i]);

       //iteration/entries checker
       qDebug() << "iteration " << i;        if (i == bookCatalogue.length()-1){
            qDebug() << i+1 << "book entries";
        }
   }

};

   AddBook::~AddBook() {

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

void AddBook::on_imageBtn_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("images(*.png *.jpg *.bmp *.gif)"));

    if(QString::compare(filename, QString()) != 0) {
        QImage image;
        bool valid = image.load(filename);
        if(valid) {
            image = image.scaledToWidth(ui->imageBtn->width(), Qt::SmoothTransformation);
            ui->bookImage->setPixmap(QPixmap::fromImage(image));

        }
        else {
            //error handling
        }
    }
};

void AddBook::on_addBookBtn_clicked()
{
    QFile file("Books");
    QString title = ui->titleLineEdit->text();
    QString author = ui->authorLineEdit->text();
    QString subjects = ui->subjectsTextEdit->toPlainText();
    QString isbnNumber = ui->ISBNnumberLineEdit->text();
    QString summery = ui->summeryTextEdit->toPlainText();
    QString contents = ui->contentsTextEdit->toPlainText();
    QString notes = ui->notesTextEdit->toPlainText();
    QString publisher = ui->publisherTextEdit->toPlainText();
    QString description = ui->descriptionTextEdit->toPlainText();
    QString edition = ui->editionTextEdit->toPlainText();
    QString image = ui->bookImage->text();

    QVector<QString> content;
    content.append(title);
    content.append(author);
    content.append(subjects);
    content.append(isbnNumber);
    content.append(summery);
    content.append(contents);
    content.append(notes);
    content.append(publisher);
    content.append(description);
    content.append(edition);
    content.append(image);
    content.append("1"); //1 for access level 1

    if(fHand.CheckValidUser(title, "Books")){
        fHand.WriteFile("Books", content);

        QMessageBox box(this);
        box.setIcon(QMessageBox::Information);
        box.setText("Congratulations, you have signed up successfully");
        box.setWindowTitle("Sign-up");
        box.setStandardButtons(QMessageBox::Ok);
        box.exec();
    } else {
        QMessageBox box(this);
        box.setIcon(QMessageBox::Warning);
        box.setText("Unfortunatley that username has been taken");
        box.setWindowTitle("Sign-up failed");
        box.setStandardButtons(QMessageBox::Ok);
        box.exec();
    }
    file.close();
}




