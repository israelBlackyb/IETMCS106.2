#include "catalogue.h"
#include "ui_catalogue.h"
#include "mainwindow.h"
#include "loginpage.h"
#include "bookoption.h"

#include <QVector>
#include <QSpacerItem>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include <QMessageBox>


Catalogue::Catalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);



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




//Nav btns
void Catalogue::on_AccountButton_clicked()
{
    LoginPage *lp;
    hide();
    lp = new LoginPage(this);
    lp->show();
}

void Catalogue::on_homeButton_clicked()
{
    MainWindow *mw;
    mw = new MainWindow(this);
    mw->show();
    hide();

}

void Catalogue::on_genresButton_clicked()
{

}




void Catalogue::on_popularButton_clicked()
{

}


void Catalogue::on_reservesButton_clicked()
{

}
//on page btns

void Catalogue::on_search_clicked()
{
    ui->scrollAreaWidgetContents->setLayout(ui->horizontalLayout);
    QString searchedText = ui->bookSearchBar->text();
}

//---------login attempt stuff---------

void Catalogue::on_filtersToolButton_triggered(QAction *arg1)
{

}


void Catalogue::on_checkoutButton_clicked()
{

}


void Catalogue::on_fictionButton_clicked()
{

}


void Catalogue::on_nonfictionButton_clicked()
{

}


void Catalogue::on_actionButton_clicked()
{

}


void Catalogue::on_comadyButton_clicked()
{

}


void Catalogue::on_dramaButton_clicked()
{

}


void Catalogue::on_romanceButton_clicked()
{

}


void Catalogue::on_mysteryButton_clicked()
{

}

    //Book btn slots
void Catalogue::on_bookButton_1_clicked()
{

}


void Catalogue::on_bookButton_2_clicked()
{

}


void Catalogue::on_bookButton_3_clicked()
{

}


void Catalogue::on_bookButton_4_clicked()
{

}


void Catalogue::on_bookButton_5_clicked()
{

}


void Catalogue::on_bookButton_6_clicked()
{

}


void Catalogue::on_bookButton_7_clicked()
{

}


void Catalogue::on_bookButton_8_clicked()
{

}


void Catalogue::on_bookButton_9_clicked()
{

}


void Catalogue::on_bookButton_10_clicked()
{

}


void Catalogue::on_bookButton_11_clicked()
{

}


void Catalogue::on_bookButton_12_clicked()
{

}


void Catalogue::on_bookButton_13_clicked()
{

}


void Catalogue::on_bookButton_14_clicked()
{

}


void Catalogue::on_bookButton_15_clicked()
{

}


void Catalogue::on_bookButton_16_clicked()
{

}
    //Book btn image slots
//read the catalogue.csv
// read column A/x  and iterate through it
//



