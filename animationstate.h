#ifndef ANIMATIONSTATE_H
#define ANIMATIONSTATE_H

#include <QWidget>

namespace Ui {
class AnimationState;
}

class AnimationState : public QWidget
{
    Q_OBJECT

public:
    explicit AnimationState(QWidget *parent = nullptr);
    ~AnimationState();

private:
    Ui::AnimationState *ui;
};

#endif // ANIMATIONSTATE_H
