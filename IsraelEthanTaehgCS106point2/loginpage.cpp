#include "loginpage.h"
#include "adminbookpage.h"
#include "ui_loginpage.h"
#include "filehandling.h"
#include "catalogue.h"

#include <QLineEdit>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

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

void LoginPage::on_signupButton_clicked()
{
    //    QFile file("logins.csv");

    //    if(!file.open(QFile::WriteOnly | QFile::Text)) {
    //        QMessageBox::warning(this, "title","file not open");
    //    }
    //    QTextStream out(&file);
    //    QString text = ui->userField->toPlainText();
    //    out << text;
    //    file.flush();
    //    file.close();


//        QLineEdit* userField = ui->userField; //assgins the text in userfield to the variable of userField
//        QLineEdit* passField = ui->passField; //same as above but ofr passfield
//        QVector<QString> content; //init var

//        content.append(userField->text());
//        content.append(passField->text());
//        content.append("1");

//        if(fHand.CheckValidUser(userField->text(), "LoginInformation")){
//            fHand.WriteFile("LoginInformation", content);
//            QMessageBox box(this);
//            box.setIcon(QMessageBox::Information);
//            box.setText("You have successfully signed up");
//            box.setWindowTitle("Sign up");
//            box.setStandardButtons(QMessageBox::Ok);
//            int returnVal=box.exec();
//            switch (returnVal) {
//            case QMessageBox::Ok:
//                //OpenWindow();
//                break;
//            default:
//                break;
//            }
//        }
//        else {
//            QMessageBox::warning(this, "sign up", "User with this name already exists");
//        }

        QString username = ui->userField->text();
        QString password = ui->passField->text();

        QVector<QString> content;
        content.append(username);
        content.append(password);
        content.append("1"); //1 for access level 1

        if(fHand.CheckValidUser(username, "LoginInformation")){
            fHand.WriteFile("LoginInformation", content);

            QMessageBox box(this);
            box.setIcon(QMessageBox::Information);
            box.setText("Congratulations, you have signed up successfully");
            box.setWindowTitle("Sign-up");
            box.setStandardButtons(QMessageBox::Ok);
            box.exec();
        } else {
            QMessageBox box(this);
            box.setIcon(QMessageBox::Warning);
            box.setText("Unfortunatley that username has been taken");
            box.setWindowTitle("Sign-up failed");
            box.setStandardButtons(QMessageBox::Ok);
            box.exec();
        }
}



// login button
void LoginPage::on_loginButton_clicked()
{
    QFile file("LoginInformation");

    QLineEdit* userField = ui->userField; //assgins the text in userfield to the variable of userField
    QLineEdit* passField = ui->passField; //same as above but ofr passfield
    QVector<QString> content; //init var

    content.append(userField->text());
    content.append(passField->text());
    content.append("1");

    //-------


    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title","file not open");
        qCritical() << file.errorString();
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->userField->setPlaceholderText(text);
    ui->passField->setPlaceholderText(text);
    //------

//    QString username = ui->userField->text();
//    QString password = ui->passField->text();



//    if(fHand.CheckValidUser(userField->text(), "LoginInformation")) {
//        fHand.ReadFile("LoginInformation", 1);
//        //creating and displaying pop up of successful login
//        QMessageBox::information(this, "login", "Username & password is correct");
//        hide();
//        Catalogue = new class Catalogue(this);
//        Catalogue->show();
//    }
//    else {
//        QMessageBox::warning(this, "Login", "Username or password is not correct");
//    }
    QString username = ui->userField->text();
    QString password = ui->passField->text();

    QVector<QVector<QString>> fileContent = fHand.ReadFile("accountInformation", 3);


        for(int i = 0; i < fileContent.size(); i++){
                if (username == fileContent.at(i).at(0)){
                    if(password == fileContent.at(i).at(1)){
                       QMessageBox::information(this, "Login", "Username and Password is correct");


                       //stores username & id as variables if sucessful
                       //availible through methodsgetloggedInUserName() + getloggedInUserID() from class
                       loggedInUserName = fileContent.at(i).at(0);
                       if (loggedInUserName == ""){
                               loggedInUserName = "default";
                    }
                          loggedInUserID = i;

                       //then closes main window and opens up sucessful login window
                       hide();
                       suclogin = new sucLogin(this);
                       suclogin->show();
                       signedIn = true;
                    } else{
                        QMessageBox::warning(this, "Login", "Username and Password is not correct");
                    }
                } else{
                    continue; //to skip duplicate messages
                }
            }
            if(!signedIn){
                QMessageBox::warning(this, "Login", "No user found");
            }
        }
}



