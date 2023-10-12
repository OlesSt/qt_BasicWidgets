#include "messagedialog.h"
#include "ui_messagedialog.h"

MessageDialog::MessageDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageDialog)
{
    ui->setupUi(this);

    connect(ui->pushWarning, SIGNAL(clicked()), this, SLOT(setMssg()));
    connect(ui->pushInfo, SIGNAL(clicked()), this, SLOT(setInfo()));
    connect(ui->pushAbout, SIGNAL(clicked()), this, SLOT(setAbout()));
}

MessageDialog::~MessageDialog()
{
    delete ui;
}

void MessageDialog::setMssg()
{
    QMessageBox::warning(this, "Warning", "This is a warning");
}

void MessageDialog::setInfo()
{
    QMessageBox::information(this, "Info", "This is a info");
}

void MessageDialog::setAbout()
{
    QMessageBox::about(this, "About", "This is about");

}
