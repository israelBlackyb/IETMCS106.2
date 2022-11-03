#include "catalogue.h"
#include "ui_catalogue.h"

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
