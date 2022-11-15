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

    void on_genresButton_clicked();

    void on_popularButton_clicked();

    void on_reservesButton_clicked();

    void on_filtersToolButton_triggered(QAction *arg1);

    void on_checkoutButton_clicked();

    void on_fictionButton_clicked();

    void on_nonfictionButton_clicked();

    void on_actionButton_clicked();

    void on_comadyButton_clicked();

    void on_dramaButton_clicked();

    void on_romanceButton_clicked();

    void on_mysteryButton_clicked();

    void on_bookButton_1_clicked();

    void on_bookButton_2_clicked();

    void on_bookButton_3_clicked();

    void on_bookButton_4_clicked();

    void on_bookButton_5_clicked();

    void on_bookButton_6_clicked();

    void on_bookButton_7_clicked();

    void on_bookButton_8_clicked();

    void on_bookButton_9_clicked();

    void on_bookButton_10_clicked();

    void on_bookButton_11_clicked();

    void on_bookButton_12_clicked();

    void on_bookButton_13_clicked();

    void on_bookButton_14_clicked();

    void on_bookButton_15_clicked();

    void on_bookButton_16_clicked();

    void on_bookLabel_1_windowIconTextChanged(const QString &iconText);

private:
    Ui::Catalogue *ui;
};

#endif // CATALOGUE_H
