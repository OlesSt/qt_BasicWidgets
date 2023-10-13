#include "lineedit.h"
#include "ui_lineedit.h"

LineEdit::LineEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LineEdit)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("password");
    ui->lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
}

LineEdit::~LineEdit()
{
    delete ui;
}
