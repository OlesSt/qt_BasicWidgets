#include "myslider.h"
#include "ui_myslider.h"

MySlider::MySlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MySlider)
{
    ui->setupUi(this);

    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(10);

    ui->verticalSlider->setMinimum(0);
    ui->verticalSlider->setMaximum(10);

    ui->labelHorizont->setText(QString::number(ui->horizontalSlider->value()));
    ui->labelVertical->setText(QString::number(ui->verticalSlider->value()));

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(changeHorizontal()));
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(countResult()));

    connect(ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(changeVertical()));
    connect(ui->verticalSlider, SIGNAL(valueChanged(int)), this, SLOT(countResult()));

}

MySlider::~MySlider()
{
    delete ui;
}

void MySlider::changeHorizontal()
{
    int value = ui->horizontalSlider->value();
    ui->labelHorizont->setText(QString::number(value));

}

void MySlider::changeVertical()
{
    int value = ui->verticalSlider->value();
    ui->labelVertical->setText(QString::number(value));
}

void MySlider::countResult()
{
    int x = ui->horizontalSlider->value();
    int y = ui->verticalSlider->value();
    int result = x * y;
    ui->labelResult->setText(QString::number(result));
}
