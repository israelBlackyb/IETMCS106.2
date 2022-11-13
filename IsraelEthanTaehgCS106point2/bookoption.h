#ifndef BOOKOPTION_H
#define BOOKOPTION_H

#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>

class BookOption : public QWidget
{
    Q_OBJECT
public:
    explicit BookOption(QWidget *parent = nullptr);
    QLabel* title = new QLabel();
    QLabel* author = new QLabel();
    QPushButton* bookCover = new QPushButton();
    QVBoxLayout* content = new QVBoxLayout();

    void setTitle(QString);
    void setAuthor(QString);
    void setImage(QPixmap);

signals:




};

#endif // BOOKOPTION_H
