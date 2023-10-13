#ifndef CHARTS_H
#define CHARTS_H

#include <QWidget>
#include <QtCharts>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>

namespace Ui {
class Charts;
}

class Charts : public QWidget
{
    Q_OBJECT

public:
    explicit Charts(QWidget *parent = nullptr);
    ~Charts();

private:
    Ui::Charts *ui;

    QBarSet     *data1;
    QBarSet     *data2;
    QBarSet     *data3;
    QBarSet     *data4;
    QBarSeries  *seriesData;
    QChart      *chart;
    QStringList  categories;

    QBarCategoryAxis *axis;
    QChartView *chartView;
};

#endif // CHARTS_H
