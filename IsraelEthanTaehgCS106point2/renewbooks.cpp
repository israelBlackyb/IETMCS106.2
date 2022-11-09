#include "renewbooks.h"
#include "ui_renewbooks.h"

RenewBooks::RenewBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RenewBooks)
{
    ui->setupUi(this);
}

RenewBooks::~RenewBooks()
{
    delete ui;
}
