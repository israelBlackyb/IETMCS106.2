#include "userbookpage.h"
#include "ui_userbookpage.h"

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
