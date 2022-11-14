#include "loginpage.h"
#include "ui_loginpage.h"
#include "filehandling.h"
#include "catalogue.h"

#include <QLineEdit>
#include <QMessageBox>

//add admin verfication

LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_sign_clicked()
{
    QLineEdit* userField = ui->userField; //assgins the text in userfield to the variable of userField
    QLineEdit* passField = ui->passField; //same as above but ofr passfield
    QVector<QString> content; //init var

    content.append(userField->text());
    content.append(passField->text());
    content.append("1");

    if(fHand.CheckValidUser(userField->text(), "LoginInformation")){ //
        fHand.WriteFile("LoginInformation", content);
        QMessageBox box(this);
        box.setIcon(QMessageBox::Information);
        box.setText("You have successfully signed up");
        box.setWindowTitle("Sign up");
        box.setStandardButtons(QMessageBox::Ok);
        int returnVal=box.exec();
        switch (returnVal) {
        case QMessageBox::Ok:
            //OpenWindow();
            break;
        default:
            break;
        }
    }
    else {
        QMessageBox::warning(this, "sign up", "User with this name already exists");
    }
}


//void LoginPage::on_log_clicked()
//{

//}

// login button
void LoginPage::on_loginButton_clicked()
{
    QString username = ui->userField->text();
    QString password = ui->passField->text();

    // checking to see if the username and password are correct
    if(username == "test" && password == "test") {
        //creating and displaying pop up of successful login
        QMessageBox::information(this, "login", "Username & password is correct");
        hide();
        Catalogue = new class Catalogue(this);
        Catalogue->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username & password is not correct");
    }
}

