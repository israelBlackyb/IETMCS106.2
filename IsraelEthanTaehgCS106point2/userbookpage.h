#ifndef USERBOOKPAGE_H
#define USERBOOKPAGE_H

#include <QMainWindow>

namespace Ui {
class userbookpage;
}

class userbookpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit userbookpage(QWidget *parent = nullptr);
    ~userbookpage();

private slots:

    void on_homeBtn_clicked();

    void on_userGenreBtn_clicked();

    void on_userPopBtn_clicked();

    void on_userResBtn_clicked();

    void on_userLogRegBtn_clicked();

    void on_userCheckBtn_clicked();

    void on_userAddListBtn_clicked();

private:
    Ui::userbookpage *ui;
};

#endif // USERBOOKPAGE_H
