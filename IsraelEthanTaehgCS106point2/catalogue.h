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

private:
    Ui::Catalogue *ui;
};

#endif // CATALOGUE_H
