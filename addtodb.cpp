#include "addtodb.h"
#include "ui_addtodb.h"
#include "mainwindow.h"

#include <ctime>
#include <iostream>


//global variable



addtodb::addtodb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addtodb)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);
    this->setWindowTitle("Add Data");

    std::time_t t = std::time(0);   // get time now
    QString nowstr = QString("%1").arg(t);


    const QString text = QString("(%1,0,0)").arg(nowstr);

    ui->textEdit->setHtml(text);

}


void addtodb::on_pushButton_clicked()
{



    QString add = ui->textEdit->toPlainText();
    qInfo()<<add;

    QSqlDatabase db= QSqlDatabase::database();

    bool ok = db.isOpen();
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

    QSqlQuery query(db);
    QString sendadd = QString("INSERT INTO btc (date,value,volume) Values "+add+";");
    qInfo()<<sendadd;

    ok=query.exec(sendadd);

    if (ok==1)
    {
       oks = "OK";
    }
    else
    {
       oks = "NO OK";
    }
    qInfo()<<"Data sent"<<oks;

    std::time_t t = std::time(0);   // get time now
    QString nowstr = QString("%1").arg(t);


    const QString text = QString("(%1,0,0)").arg(nowstr);

    ui->textEdit->setHtml(text);

}



addtodb::~addtodb()
{
    delete ui;
}

