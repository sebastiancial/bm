#include "jschart.h"
#include "ui_jschart.h"
#include "mainwindow.h"


jschart::jschart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jschart)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);
    this->setWindowTitle("Data Chart");

    int intdate;
    QDateTime datetm;
    QLineSeries *series = new QLineSeries;

    /*
    //refresh database
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("SELECT * FROM `btc` ;");
    queryshare = query;
    */

    queryshare.first();
    for(int m=0;m<queryshare.size();m++)
    {

        intdate=queryshare.value(1).toInt();
        time_t tdate = intdate;
        datetm.setTime_t(tdate);
        //qInfo()<<datetm;
        qreal yvalue = queryshare.value(2).toInt();
        series->append(datetm.toMSecsSinceEpoch(), yvalue );

        queryshare.next();

    }


    //general chart preperities
    QChart *chart = new QChart();;
    chart->legend()->hide();
    chart->setTitle("Bitoinc exchange chart");

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setTickCount(10);
    axisX->setFormat("MM/yyyy");
    axisX->setTitleText("Date");

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Value in $");


    QChartView *chartView = new QChartView(chart);
    chartView->chart()->addSeries(series);
    chartView->chart()->setAxisX(axisX, series);
    chartView->chart()->setAxisY(axisY, series);
    chartView->setRenderHint(QPainter::Antialiasing);

    QWidget * chartWindow = ui->chart;

    QVBoxLayout *layout = new QVBoxLayout(chartWindow);

    layout->addWidget(chartView);

    setLayout(layout);

    layout->activate();



}

jschart::~jschart()
{
    delete ui;
}
