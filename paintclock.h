#ifndef PAINTCLOCK_H
#define PAINTCLOCK_H

#include <QWidget>
#include <QPainter>
#include <QTime>
#include <QTimer>

namespace Ui {
class PaintClock;
}

class PaintClock : public QWidget
{
    Q_OBJECT

public:
    explicit PaintClock(QWidget *parent = nullptr);
    ~PaintClock();

    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::PaintClock *ui;
    QTimer *timer;
};

#endif // PAINTCLOCK_H
