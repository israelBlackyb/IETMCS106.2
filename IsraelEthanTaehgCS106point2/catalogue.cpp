#include "catalogue.h"
#include "ui_catalogue.h"
#include "mainwindow.h"
#include "loginpage.h"

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


void Catalogue::on_search_clicked()
{
    ui->scrollAreaWidgetContents->setLayout(ui->horizontalLayout);
    QString searchedText = ui->bookSearchBar->text();
}

