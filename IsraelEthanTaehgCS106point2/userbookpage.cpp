#include "userbookpage.h"
#include "ui_userbookpage.h"
#include "ui_userBookPage.h"
userbookpage::userbookpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userbookpage)
{
    ui->setupUi(this);
}

userbookpage::~userbookpage()
{
    delete ui;
}
//nav btns
void userbookpage::on_homeBtn_clicked()
{

}

void userbookpage::on_userGenreBtn_clicked()
{

}


void userbookpage::on_userPopBtn_clicked()
{

}


void userbookpage::on_userResBtn_clicked()
{

}


void userbookpage::on_userLogRegBtn_clicked()
{

}
//on page btns

void userbookpage::on_userCheckBtn_clicked()
{

}


void userbookpage::on_userAddListBtn_clicked()
{

}

