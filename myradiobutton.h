#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H

#include <QWidget>

namespace Ui {
class MyRadioButton;
}

class MyRadioButton : public QWidget
{
    Q_OBJECT

public:
    explicit MyRadioButton(QWidget *parent = nullptr);
    ~MyRadioButton();

public slots:
    void changeLabel();

private:
    Ui::MyRadioButton *ui;
};

#endif // MYRADIOBUTTON_H
