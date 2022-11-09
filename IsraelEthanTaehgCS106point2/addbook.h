#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>

#include "filehandling.h"

namespace Ui {
class AddBook;
}

class AddBook : public QDialog
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols);
    void WriteFile(QString fileName, QVector<QString> fileContent);
    bool CheckValidUser(QString username, QString fileName);
    bool nameFound = false;

private slots:
    void on_home_clicked();

    void on_addBook_clicked();

    void on_editBook_clicked();

    void on_accountManager_clicked();

    void on_addUser_clicked();

private:
    Ui::AddBook *ui;
    FileHandling fHand;
    QVector<QVector<QString>> bookCatalogue;
};

#endif // ADDBOOK_H
