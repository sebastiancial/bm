#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "querywindow.h"
#include "jschart.h"

//global variable
QSqlQuery queryshare;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("Bitcoin Manager");
    //geting json to display
    QNetworkRequest request(QUrl("http://api.coindesk.com/v1/bpi/currentprice.json"));
    //QNetworkRequest request(QUrl("http://api.blockchain.info/charts/market-price?format=json"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    reply = manager->get(request);

    //QEventLoop loop;
    //connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    //loop.exec();

    connect(reply, SIGNAL(readyRead()), this, SLOT(urlRead()));
    connect(reply, SIGNAL(finished()), this, SLOT(urlFinished()));

    //QByteArray data = reply->readAll();
    //QString dataReply(data);
    //QJsonDocument doc = QJsonDocument::fromJson(dataReply.toUtf8());
    //qDebug()<<doc;

    // FIXME for debug
    //qDebug() << "Sync" << QString::fromUtf8(data.data(), data.size());


}

MainWindow::~MainWindow()
{

    delete ui;

}

void MainWindow::on_pushButton_clicked()
{


    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("eu-cdbr-west-01.cleardb.com");
    db.setDatabaseName("heroku_02626224355284d");
    db.setUserName("b9c3c25375a034");
    db.setPassword("eefe98f3");
    bool ok = db.open();
    db = QSqlDatabase();
    QString oks;
    if (ok==1)
    {
        oks = "ON";
    }
    else
    {
        oks = "OFF";
    }

    qInfo()<<"The status of the database connection is "<< oks ;



    if (ok==1)
    {
        drawShapes = 1;
        update();
    }

    QSqlQuery query(db);
    query.exec("SELECT * FROM `btc` ;");
    queryshare = query;
//    while (query.next()) {
//    int timebm = query.value(1).toInt();
//    qInfo("%d",timebm);
//    }
    qInfo()<<"Database has "<<query.size()<<" rows and "<<query.record().count()<<"columns";

    db.close();
    db.removeDatabase(db.connectionName());
}

void MainWindow::paintEvent(QPaintEvent *)
{

    int a=280, b=480, c=240, d=75;

    QPainter painter(this);
    painter.fillRect(a, b, c, d, Qt::red);
    painter.drawRect(a, b, c, d);

    if(drawShapes)
    {

    painter.fillRect(a, b, c, d, Qt::green);
    painter.drawRect(a, b, c, d);

    }
}


void MainWindow::on_pushButton_2_clicked()
{

    querywindow *qw;

    qw =new querywindow();
    qw->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    jschart *chart;

    chart =new jschart();
    chart->show();

}

void MainWindow::urlRead()
{
    buffer += reply->readAll();
}

void MainWindow::urlFinished()
{
    QString data(buffer);
    //ui->textBrowser->setText(data);
    QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
    qDebug()<<doc;
    saveJson(doc,QString("json_btc"));
}

void MainWindow::saveJson(QJsonDocument document, QString fileName)
{
    QFile jsonFile(QString("./json/")+fileName);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
}
