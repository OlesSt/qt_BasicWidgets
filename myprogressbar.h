#ifndef MYPROGRESSBAR_H
#define MYPROGRESSBAR_H

#include <QWidget>

namespace Ui {
class MyProgressBar;
}

class MyProgressBar : public QWidget
{
    Q_OBJECT

public:
    explicit MyProgressBar(QWidget *parent = nullptr);
    ~MyProgressBar();

private:
    Ui::MyProgressBar *ui;

};

#endif // MYPROGRESSBAR_H
