#include "inputdialog.h"
#include "ui_inputdialog.h"

InputDialog::InputDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputDialog)
{
    ui->setupUi(this);
    inputDialog = new QInputDialog();
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(getMyItem()));

}

InputDialog::~InputDialog()
{
    delete ui;
}

void InputDialog::getMyText()
{
    QString text = QInputDialog::getText(this, "Get Username", "Enter your name");
    if(!text.isEmpty())
    {
        ui->lineEdit->setText(text);
    }

}

void InputDialog::getMyItem()
{
    QList<QString> languages = {"C++", "Python", "Java"};
    QString textItem = QInputDialog::getItem(this, "Input Dialog", "List of languages", languages, 0, true);
    if(!textItem.isEmpty())
    {
        ui->lineEdit->setText(textItem);
    }
}
