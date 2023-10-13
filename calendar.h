#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);
    ~Calendar();

public slots:
    void SelectDate();

private:
    Ui::Calendar *ui;
};

#endif // CALENDAR_H
