#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include "filehandling.h"
#include "catalogue.h"

#include <QVector>
#include <QMainWindow>

namespace Ui {
class LoginPage;
}

class LoginPage : public QMainWindow
{

    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

    // ** getter for QString loggedInUserName;
    QString getloggedInUserName(){
        return loggedInUserName;
    }

    // ** getter for int loggedInUserID;
    int getloggedInUserID(){
        return loggedInUserID;
    }

private slots:
    void on_loginButton_clicked();
    void on_signupButton_clicked();

private:
    Ui::LoginPage *ui;
    bool signedIn=false;
    void OpenWindow();
    FileHandling fHand;
    Catalogue *Catalogue;
};

#endif // LOGINPAGE_H
