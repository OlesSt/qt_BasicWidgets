#include "myprogressbar.h"
#include "ui_myprogressbar.h"

MyProgressBar::MyProgressBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyProgressBar)
{
    ui->setupUi(this);

    ui->horizontalSlider->setValue(10);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);

    ui->progressBar->setValue(ui->horizontalSlider->value());
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);

    ui->lcdNumber->display(ui->horizontalSlider->value());

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->lcdNumber, SLOT(display(int)));



}

MyProgressBar::~MyProgressBar()
{
    delete ui;
}
