#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"

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

//activate Login button to take you to Login page


void MainWindow::on_loginReg_clicked()
{
   LoginPage *lp;
    lp = new LoginPage();
    hide();         // this is to hide the previous window
    lp = new LoginPage(this);
    lp->show();

}

