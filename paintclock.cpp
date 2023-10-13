#include "paintclock.h"
#include "ui_paintclock.h"

PaintClock::PaintClock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaintClock)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
}

PaintClock::~PaintClock()
{
    delete timer;
    delete ui;
}

void PaintClock::paintEvent(QPaintEvent *event)
{
    static const QPoint hourHand[3] =
        {
            QPoint(4,4),
            QPoint(-4,4),
            QPoint(0,-40)
        };

    static const QPoint minutHand[3] =
        {
            QPoint(4,4),
            QPoint(-4,4),
            QPoint(0,-70)
        };

    static const QPoint secHand[3] =
        {
            QPoint(2,2),
            QPoint(-2,2),
            QPoint(0,-90)
        };

    int side = qMin(width(), height());
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width() / 2, height() / 2);
    painter.scale(side / 250, side / 250);

    for (int i = 0; i < 60; i++)
    {
        if (i % 5 != 0)
            painter.drawLine(92, 0, 96, 0);
        else
            painter.drawLine(86, 0, 96, 0);
        painter.rotate(6);
    }

    QTime time = QTime::currentTime();
    painter.save();
    painter.rotate((time.hour() * 360) / 12);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();

    painter.save();
    painter.rotate((time.minute() * 360) / 60);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(minutHand, 3);
    painter.restore();

    painter.save();
    painter.rotate((time.second() * 360) / 60);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(secHand, 3);
    painter.restore();
}
