#include "bookoption.h"
#include <QIcon>

BookOption::BookOption(QWidget *parent)
    : QWidget{parent}
{
    content->addWidget(bookCover);
    content->addLayout(new QVBoxLayout());
    content->addWidget(title);
    content->addWidget(author);
}


void BookOption::setTitle(QString input){
    title->setText(input);
}

void BookOption::setAuthor(QString input){
    author->setText(input);
}

void BookOption::setImage(QPixmap image){
    QRect rect(0,0,150,200);
    QIcon icon(image);
    bookCover->setIcon(icon);
    bookCover->setIconSize(rect.size());
    bookCover->setGeometry(rect);


}
