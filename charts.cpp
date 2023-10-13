#include "charts.h"
#include "ui_charts.h"

Charts::Charts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Charts)
{
    ui->setupUi(this);

    data1 = new QBarSet("Data 1");
    data2 = new QBarSet("Data 2");
    data3 = new QBarSet("Data 3");
    data4 = new QBarSet("Data 4");

    *data1 << 30 << 40 << 10 << 20 << 10 << 60;
    *data2 << 20 << 10 << 80 << 90 << 50 << 40;
    *data3 << 20 << 10 << 30 << 80 << 40 << 60;
    *data4 << 60 << 20 << 50 << 10 << 90 << 30;


    seriesData = new QBarSeries();

    seriesData->append(data1);
    seriesData->append(data2);
    seriesData->append(data3);
    seriesData->append(data4);


    chart = new QChart();
    chart->addSeries(seriesData);

    categories << "Analyze 1" << "Analyze 2" << "Analyze 3" << "Analyze 4";

    axis = new QBarCategoryAxis();

    axis->append(categories);
    chart->createDefaultAxes();
    chart->addAxis(axis, Qt::AlignmentFlag::AlignRight);

    chartView = new QChartView(chart);
    chartView->setGeometry(1, 1, 500, 300);
    chartView->setParent(ui->frame);

}

Charts::~Charts()
{
    delete ui;
}
