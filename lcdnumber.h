#ifndef LCDNUMBER_H
#define LCDNUMBER_H

#include <QWidget>
#include <QLCDNumber>

namespace Ui {
class LcdNumber;
}

class LcdNumber : public QWidget
{
    Q_OBJECT

public:
    explicit LcdNumber(QWidget *parent = nullptr);
    ~LcdNumber();

public slots:
    void showTime();

private:
    Ui::LcdNumber *ui;
};

#endif // LCDNUMBER_H
