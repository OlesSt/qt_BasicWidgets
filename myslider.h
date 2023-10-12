#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QWidget>

namespace Ui {
class MySlider;
}

class MySlider : public QWidget
{
    Q_OBJECT

public:
    explicit MySlider(QWidget *parent = nullptr);
    ~MySlider();

public slots:
    void changeHorizontal();
    void changeVertical();

    void countResult();

private:
    Ui::MySlider *ui;
};

#endif // MYSLIDER_H
