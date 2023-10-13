#include "dragdrop.h"
#include "ui_dragdrop.h"

DragDrop::DragDrop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DragDrop)
{
    ui->setupUi(this);

    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDragEnabled(true);
    ui->listWidget_2->setAcceptDrops(true);
    ui->listWidget_2->setDragEnabled(true);
}

DragDrop::~DragDrop()
{
    delete ui;
}
