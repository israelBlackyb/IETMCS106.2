#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"
#include "catalogue.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



//nav btns
void MainWindow::on_loginReg_clicked()
{
   LoginPage *lp;
    hide();         // this is to hide the previous window
    lp = new LoginPage(this);
    lp->show();

}


void MainWindow::on_homeButton_clicked()
{
    //have homebutton do nothing if the mainWindow is open

    MainWindow *mw;

    hide();
    mw = new MainWindow(this);
    mw->show();

}


void MainWindow::on_genres_clicked()
{
    Catalogue *ct;
    hide();
    ct = new Catalogue(this);
    ct->show();

}


void MainWindow::on_popularButton_clicked()
{

}


void MainWindow::on_reservesButton_clicked()
{

}

