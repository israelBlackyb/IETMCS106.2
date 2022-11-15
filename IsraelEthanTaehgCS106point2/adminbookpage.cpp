#include "adminbookpage.h"
#include "ui_adminbookpage.h"
#include <QBoxLayout>
#include <QLineEdit>
#include <QSpacerItem>
#include <QString>

AdminBookPage::AdminBookPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminBookPage)
{
    ui->setupUi(this);


        //Create instance of save and cancel buttons, and connect to slot functions
    QPushButton* saveBtn = new QPushButton(editBox);
    saveBtn->connect(saveBtn, SIGNAL(clicked()), this, SLOT(saveClicked()));
    saveBtn->setText("Save");
    QPushButton* cancelBtn = new QPushButton(editBox);
    cancelBtn->setText("Cancel");
    saveBtn->connect(cancelBtn, SIGNAL(clicked()), this, SLOT(cancelClicked()));
    saveBtn->connect(cancelBtn, SIGNAL(clicked()), this, SLOT(cancelClicked()));
    cancelBtn->setText("Cancel");

        //Create instance of vertical layout group, horizontal layout group, and spacer
        //Populate the layout groups with each element created
    QVBoxLayout* vLayout = new QVBoxLayout(editBox);
    QHBoxLayout* hLayout = new QHBoxLayout();
    QSpacerItem* hSpacer = new QSpacerItem(0,0, QSizePolicy::Expanding);    //QSpaceritem takes parameters as:
                                                                            //(int width, int height, QSizePolicy::policy horizontalPolicy, QSizePolicy::policy verticalPolicy)
    vLayout->addWidget(textField);  //Add textField widget to vLayout defined
    hLayout->addWidget(cancelBtn);  //Add cancelBtn widget to hLayout defined
    hLayout->addSpacerItem(hSpacer);    //Add hSpacer as spacer item to hLayout
    hLayout->addWidget(saveBtn);        //Add saveBtn to hLayout
    vLayout->addLayout(hLayout);        //Add hLayout as QBoxLayout to vLayout
}

AdminBookPage::~AdminBookPage()
{
    delete ui;
}

void AdminBookPage::on_summaryEditBtn_clicked()
{
    //Perform a switch case on the return of editBox(Dialog).exec()
    //Returns one if accept is called
    //Returns 0 if cancel called.
    switch(editBox->exec()){
    case 1:
        //Update label with text added to editedText string
        ui->bookDesc->setText(editedText);
    }

}

//Slot function added in header file
void AdminBookPage::saveClicked(){
    //Assign editedText string = to text added to textField QLineEdit
    editedText = textField->text();
    editBox->accept();      //Call accept function on editBox so that it returns a value of 1 for switch case
}

void AdminBookPage::cancelClicked(){

}

//Read the editable parts of the book page


//nav btns



















