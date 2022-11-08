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

private:
    Ui::userbookpage *ui;
};

#endif // USERBOOKPAGE_H
