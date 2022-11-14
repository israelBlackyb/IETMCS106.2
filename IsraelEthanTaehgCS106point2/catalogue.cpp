#include "catalogue.h"
#include "ui_catalogue.h"
#include "mainwindow.h"
#include "loginpage.h"

using std::string;

class book {

private:
    string title;
    string author;
    string summary;
    string subject;
    string contents;
    string notes;
    string description;
    string publisher;
    string edition;
    string callNumber;

};

Catalogue::Catalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);
}

Catalogue::~Catalogue()
{
    delete ui;
}

void Catalogue::on_homeButton_clicked()
{
    MainWindow *mw;

    hide();
    mw = new MainWindow(this);
    mw->show();
}


void Catalogue::on_AccountButton_clicked()
{
    LoginPage *lp;
    hide();
    lp = new LoginPage(this);
    lp->show();
}




