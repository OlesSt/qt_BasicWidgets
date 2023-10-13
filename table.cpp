#include "table.h"
#include "ui_table.h"

#include <QPen>
#include <QColor>

Table::Table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(3);
    ui->tableWidget->setStyleSheet("background-color: #807BAD");
    ui->tableWidget->setGridStyle(Qt::PenStyle::SolidLine);
}

Table::~Table()
{
    delete ui;
}
