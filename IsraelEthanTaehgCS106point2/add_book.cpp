#include "add_book.h"
#include "ui_add_book.h"

add_book::add_book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_book)
{
    ui->setupUi(this);
}

add_book::~add_book()
{
    delete ui;
}
