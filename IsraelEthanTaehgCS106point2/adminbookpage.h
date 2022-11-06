#ifndef ADMINBOOKPAGE_H
#define ADMINBOOKPAGE_H

#include <QMainWindow>
#include <QDialog>
#include <QLineEdit>

namespace Ui {
class AdminBookPage;
}

class AdminBookPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminBookPage(QWidget *parent = nullptr);
    ~AdminBookPage();

private slots:
    void on_EditBtn_clicked();

    void saveClicked();
    void cancelClicked();

private:
    Ui::AdminBookPage *ui;
    QDialog* editBox = new QDialog();
    QLineEdit* textField = new QLineEdit();
    QString editedText;
};

#endif // ADMINBOOKPAGE_H
