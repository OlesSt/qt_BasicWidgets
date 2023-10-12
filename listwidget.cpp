#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
    ui->listWidget->insertItem(0, "Item 01");
    ui->listWidget->insertItem(1, "Item 02");
    ui->listWidget->insertItem(2, "Item 03");
    ui->listWidget->insertItem(3, "Item 04");
    ui->listWidget->insertItem(4, "Item 05");
}

ListWidget::~ListWidget()
{
    delete ui;
}
