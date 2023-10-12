#include "lcdnumber.h"
#include "ui_lcdnumber.h"

#include <QTime>
#include <QTimer>

LcdNumber::LcdNumber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LcdNumber)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();
}

LcdNumber::~LcdNumber()
{
    delete ui;
}

void LcdNumber::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second() % 2 ) == 0)
        text[2] = ' ';
    ui->lcd->display(text);
}
