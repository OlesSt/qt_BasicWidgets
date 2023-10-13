#include "checkbox.h"
#include "ui_checkbox.h"

CheckBox::CheckBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckBox)
{
    ui->setupUi(this);

    ui->checkOption01->

    connect(ui->checkOption01, SIGNAL(stateChanged(int)), this, SLOT(ChooseCheckBox()));
    connect(ui->checkOption02, SIGNAL(stateChanged(int)), this, SLOT(ChooseCheckBox()));
    connect(ui->checkOption03, SIGNAL(stateChanged(int)), this, SLOT(ChooseCheckBox()));

//    connect(ui->checkOption01, SIGNAL(stateChanged(int)), this, SLOT(UpdateCheck()));
//    connect(ui->checkOption02, SIGNAL(stateChanged(int)), this, SLOT(UpdateCheck()));
//    connect(ui->checkOption03, SIGNAL(stateChanged(int)), this, SLOT(UpdateCheck()));
}

CheckBox::~CheckBox()
{
    delete ui;
}

void CheckBox::ChooseCheckBox()
{
    QString text;

    if (ui->checkOption01->isChecked())
    {
        text = ui->checkOption01->text();
        ui->label->setText(text);
    }
    if (ui->checkOption02->isChecked())
    {
        text = ui->checkOption02->text();
        ui->label->setText(text);
    }
    if (ui->checkOption03->isChecked())
    {
        text = ui->checkOption03->text();
        ui->label->setText(text);
    }
}

//void CheckBox::UpdateCheck()
//{
//    if (ui->checkOption01->isChecked())
//    {
//        ui->checkOption02->setChecked(false);
//        ui->checkOption03->setChecked(false);
//    }

//    if (ui->checkOption02->isChecked())
//    {
//        ui->checkOption01->setChecked(false);
//        ui->checkOption03->setChecked(false);
//    }
//    if (ui->checkOption03->isChecked())
//    {
//        ui->checkOption01->setChecked(false);
//        ui->checkOption02->setChecked(false);
//    }
//}
