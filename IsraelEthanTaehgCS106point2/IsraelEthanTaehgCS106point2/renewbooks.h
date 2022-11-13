#ifndef RENEWBOOKS_H
#define RENEWBOOKS_H

#include <QDialog>

namespace Ui {
class RenewBooks;
}

class RenewBooks : public QDialog
{
    Q_OBJECT

public:
    explicit RenewBooks(QWidget *parent = nullptr);
    ~RenewBooks();

private:
    Ui::RenewBooks *ui;
};

#endif // RENEWBOOKS_H
