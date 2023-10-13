#include "diagram.h"
#include "ui_diagram.h"

#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QPieSeries>
#include <QPieSlice>

Diagram::Diagram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diagram)
{
    ui->setupUi(this);

    QPieSeries *series = new QPieSeries();
    series->append("C++", 80);
    series->append("Python", 70);
    series->append("Java", 50);
    series->append("C#", 40);
    series->append("PHP", 30);

    series->setHoleSize(0.2);

    QPieSlice *slice = series->slices().at(1);
    slice->setExploded(true);
    slice->setLabelVisible(true);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QChartView *chartView = new QChartView(chart);
    chartView->setGeometry(10,10,500,500);
    chartView->setParent(ui->frame);
}

Diagram::~Diagram()
{
    delete ui;
}
