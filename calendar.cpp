#include "calendar.h"
#include "ui_calendar.h"

Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar)
{
    ui->setupUi(this);
    connect(ui->calendarWidget, SIGNAL(selectionChanged()), this, SLOT(SelectDate()));
}

Calendar::~Calendar()
{
    delete ui;
}

void Calendar::SelectDate()
{
    QString text = ui->calendarWidget->selectedDate().toString();
    ui->label->setText(text);
}
