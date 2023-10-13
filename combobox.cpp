#include "combobox.h"
#include "ui_combobox.h"

ComboBox::ComboBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComboBox)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Option 1");
    ui->comboBox->addItem("Option 2");
    ui->comboBox->addItem("Option 3");

    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(ChoosenItem()));
}

ComboBox::~ComboBox()
{
    delete ui;
}

void ComboBox::ChoosenItem()
{
    QString text = ui->comboBox->currentText();
    ui->label->setText("You choose " + text);
}
