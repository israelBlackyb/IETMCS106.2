#ifndef ADD_BOOK_H
#define ADD_BOOK_H

#include <QDialog>

namespace Ui {
class add_book;
}

class add_book : public QDialog
{
    Q_OBJECT

public:
    explicit add_book(QWidget *parent = nullptr);
    ~add_book();

private:
    Ui::add_book *ui;
};

#endif // ADD_BOOK_H
