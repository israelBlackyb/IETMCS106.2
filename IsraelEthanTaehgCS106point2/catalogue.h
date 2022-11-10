#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QMainWindow>

namespace Ui {
class Catalogue;
}

class Catalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Catalogue(QWidget *parent = nullptr);
    ~Catalogue();

private slots:
    void on_homeButton_clicked();

    void on_AccountButton_clicked();

    void on_search_clicked();

private:
    Ui::Catalogue *ui;
};

#endif // CATALOGUE_H
