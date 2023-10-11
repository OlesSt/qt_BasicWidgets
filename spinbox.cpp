#include "spinbox.h"
#include "ui_spinbox.h"

SpinBox::SpinBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpinBox)
{
    ui->setupUi(this);

    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(ChangeValue()));
}

SpinBox::~SpinBox()
{
    delete ui;
}

void SpinBox::ChangeValue()
{
    int price = ui->linePrice->text().toInt();
    int amount = ui->spinBox->value();

    int result = price * amount;
    ui->lineResult->setText(QString::number(result));
}
