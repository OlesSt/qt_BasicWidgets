#ifndef ANIMATIONPROPERTY_H
#define ANIMATIONPROPERTY_H

#include <QWidget>

namespace Ui {
class AnimationProperty;
}

class AnimationProperty : public QWidget
{
    Q_OBJECT

public:
    explicit AnimationProperty(QWidget *parent = nullptr);
    ~AnimationProperty();

private:
    Ui::AnimationProperty *ui;
};

#endif // ANIMATIONPROPERTY_H
