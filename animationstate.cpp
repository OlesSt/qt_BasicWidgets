#include "animationstate.h"
#include "ui_animationstate.h"

#include <QStateMachine>
#include <QState>
#include <QEventTransition>

AnimationState::AnimationState(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimationState)
{
    ui->setupUi(this);

    QStateMachine *machine = new QStateMachine(this);
    QState *state_1 = new QState();
    state_1->assignProperty(ui->pushObject, "geometry", QRect(10,140,111,61));

    QState *state_2 = new QState();
    state_2->assignProperty(ui->pushObject, "geometry", QRect(180,140,111,61));

    QEventTransition *transition_1 = new QEventTransition(ui->pushChageState, QEvent::MouseButtonPress);
    transition_1->setTargetState(state_2);
    state_1->addTransition(transition_1);

    QEventTransition *transition_2 = new QEventTransition(ui->pushChageState, QEvent::MouseButtonPress);
    transition_2->setTargetState(state_1);
    state_2->addTransition(transition_2);

    machine->addState(state_1);
    machine->addState(state_2);
    machine->setInitialState(state_2);
    machine->start();
}

AnimationState::~AnimationState()
{    
    delete ui;
}
