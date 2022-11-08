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

private:
    Ui::userbookpage *ui;
};

#endif // USERBOOKPAGE_H
