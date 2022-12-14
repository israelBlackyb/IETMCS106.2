#include "catalogue.h"
#include "ui_catalogue.h"
#include "mainwindow.h"
#include "loginpage.h"
#include "bookoption.h"

#include <QVector>
#include <QSpacerItem>



Catalogue::Catalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);

//    ui->bookButton_1->setIcon(QIcon(":/Images/images/spaceAndMotion.png"));
//    ui->bookButton_1->setIconSize(QSize(100,100));

    QVector<BookOption*> books;

    //displays title, author and book to its place
    for(int i = 0; i < 10; i++){
        books.push_back(new BookOption());
        QString mapDir = "";
        QPixmap map (mapDir);
       books.at(i)->setAuthor("Poo");
      books.at(i)->setTitle("Pee");
        books.at(i)->setImage(map);
    }
    //Books = books read in file



    int numRows = ceil(books.size()/4);

    QGridLayout* grid = ui->gridLayout;
    QSpacerItem* item = new QSpacerItem(30, 20, QSizePolicy::Maximum);


    //For every row in numRows = ceiling(books/4)
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < 4; j++){

            if(j % 2 == 0){
                grid->addItem(item, i, j);
            }
            else{
                grid->addWidget(books.at(i), i, j);
            }
        }
    }


}

Catalogue::~Catalogue()
{
    delete ui;
}

void Catalogue::on_homeButton_clicked()
{
    MainWindow *mw;
    mw = new MainWindow(this);
    mw->show();
    hide();

}



//Read csv
//Populate button with title
//Populate button with image
//Populate under with title of book/Author


void Catalogue::on_AccountButton_clicked()
{
    LoginPage *lp;
    hide();
    lp = new LoginPage(this);
    lp->show();
}


void Catalogue::on_search_clicked()
{
    ui->scrollAreaWidgetContents->setLayout(ui->horizontalLayout);
    QString searchedText = ui->bookSearchBar->text();
}

//---------login attempt stuff---------







