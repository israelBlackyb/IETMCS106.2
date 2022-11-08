#include "userbookpage.h"
<<<<<<< HEAD
#include "ui_userbookpage.h"
=======
#include "ui_userBookPage.h"
>>>>>>> Taehg

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
<<<<<<< HEAD
=======

void userbookpage::on_homeBtn_clicked()
{

}

>>>>>>> Taehg
