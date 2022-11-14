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

private slots:
    void on_sign_clicked();
    void on_log_clicked();

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
