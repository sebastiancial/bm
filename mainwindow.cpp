#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "querywindow.h"
#include "jschart.h"
#include "deletefrdb.h"
#include "addtodb.h"


//global variable
QSqlQuery queryshare;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("Bitcoin Manager");
    ui->label_2->setPixmap(QPixmap("./images/bitcoin-225079_1280.png"));


    //geting json to file

    QNetworkRequest request(QUrl("http://api.coindesk.com/v1/bpi/currentprice.json"));
    //QNetworkRequest request(QUrl("http://api.blockchain.info/charts/market-price?format=json"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    reply = manager->get(request);

    connect(reply, SIGNAL(readyRead()), this, SLOT(urlRead()));
    connect(reply, SIGNAL(finished()), this, SLOT(urlFinished()));

    //displaying data from json file
    QFile jsonFile("./json/json_btc.json");
    jsonFile.open(QFile::ReadOnly);
    QByteArray jsonall = jsonFile.readAll();

    jsonFile.close();

    QJsonDocument jsontemp = QJsonDocument::fromJson(jsonall);
    QJsonObject rootObject = jsontemp.object();
    QJsonValue val1 = rootObject.value("bpi");
    QJsonObject nextlevel = val1.toObject();
    QJsonValue val2 = nextlevel.value("USD");
    QJsonObject nextlevel2 = val2.toObject();
    showvar(nextlevel2.value("rate_float"));

}

MainWindow::~MainWindow()
{


    {
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    }
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("eu-cdbr-west-01.cleardb.com");
    db.setDatabaseName("heroku_02626224355284d");
    db.setUserName("b9c3c25375a034");
    db.setPassword("eefe98f3");
    bool ok = db.open();
    //db = QSqlDatabase();

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
    qInfo()<<"Database has "<<query.size()<<" rows and "<<query.record().count()<<"columns";
    //db.close();
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

    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
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

void MainWindow::on_pushButton_4_clicked()
{
    deletefrdb *del;

    del =new deletefrdb();
    del->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    addtodb *addo;

    addo =new addtodb();
    addo->show();

}

void MainWindow::urlRead()
{
    buffer += reply->readAll();
}

void MainWindow::urlFinished()
{
    QString data(buffer);
    //ui->textBrowser->setText(data);
    jsondoc = QJsonDocument::fromJson(data.toUtf8());
    qDebug()<<!jsondoc.isEmpty();
    if (!jsondoc.isEmpty())
    {
    saveJson(jsondoc,QString("json_btc.json"));
    }

    QJsonObject rootObject = jsondoc.object();
    QJsonValue val1 = rootObject.value("bpi");
    QJsonObject nextlevel = val1.toObject();
    QJsonValue val2 = nextlevel.value("USD");
    QJsonObject nextlevel2 = val2.toObject();
    showvar(nextlevel2.value("rate_float"));
}

void MainWindow::saveJson(QJsonDocument document, QString fileName)
{
    QFile jsonFile("./json/"+fileName);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
    jsonFile.close();
}

void MainWindow::showvar(QJsonValue val3)
{
    double bitvar = val3.toDouble();
    ui->course_dig->display(bitvar);
    //qDebug()<<bitvar;
}
