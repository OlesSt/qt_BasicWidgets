#include "myradiobutton.h"
#include "ui_myradiobutton.h"

MyRadioButton::MyRadioButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyRadioButton)
{
    ui->setupUi(this);

    connect(ui->radioOption01, SIGNAL(clicked()), this, SLOT(changeLabel()));
    connect(ui->radioOption02, SIGNAL(clicked()), this, SLOT(changeLabel()));
    connect(ui->radioOption03, SIGNAL(clicked()), this, SLOT(changeLabel()));

}

MyRadioButton::~MyRadioButton()
{
    delete ui;
}

void MyRadioButton::changeLabel()
{
    if (ui->radioOption01->isChecked()) { ui->label->setText("Option 1");}
    if (ui->radioOption02->isChecked()) { ui->label->setText("Option 2");}
    if (ui->radioOption03->isChecked()) { ui->label->setText("Option 3");}
}
