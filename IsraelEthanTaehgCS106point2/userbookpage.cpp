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
void userbookpage::on_homeBtn_clicked()
{

}
