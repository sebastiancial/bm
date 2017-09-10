#include "jschart.h"
#include "ui_jschart.h"
#include "mainwindow.h"




jschart::jschart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jschart)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);



//    series->append(0, 6);
//    series->append(2, 4);
//    series->append(3, 8);
//    series->append(7, 4);
//    series->append(10, 5);
//    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

    queryshare.first();
    for(int m=0;m<queryshare.size();m++)
    {



        series->append(queryshare.value(0).toDouble(), queryshare.value(2).toDouble());
        queryshare.next();




    }

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Simple line chart example");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    //QWidget * widget;

    QWidget * chartWindow = ui->testowy;



    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);
    setLayout(layout);



    layout->activate();



}

jschart::~jschart()
{
    delete ui;
}
