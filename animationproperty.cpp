#include "animationproperty.h"
#include "ui_animationproperty.h"

#include <QPropertyAnimation>

AnimationProperty::AnimationProperty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimationProperty)
{
    ui->setupUi(this);

    QPropertyAnimation *animation = new QPropertyAnimation(ui->object, "geometry");
    animation->setDuration(7000);

    animation->setKeyValueAt(0, QRect(0,0,100,30));
    animation->setKeyValueAt(0.8, QRect(250,250,100,30));
    animation->setKeyValueAt(1, QRect(0,0,100,30));

    animation->setEndValue(QRect(0,0,100,50));
    animation->start();
}

AnimationProperty::~AnimationProperty()
{
    delete ui;
}
