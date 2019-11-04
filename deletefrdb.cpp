#include "deletefrdb.h"
#include "ui_deletefrdb.h"
#include "mainwindow.h"

//global variable



deletefrdb::deletefrdb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletefrdb)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);
    this->setWindowTitle("Delete Data");

    QSqlDatabase db = QSqlDatabase::database();

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



}



void deletefrdb::on_pushButton_clicked()
{


    QSqlDatabase db; //= QSqlDatabase::database();

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

    QString del = ui->textEdit->toPlainText();
    QString senddel = QString("DELETE from btc WHERE lp="+del+";");
    qInfo()<<senddel;

    ok=query.exec(senddel);

    if (ok==1)
    {
       oks = "OK";
    }
    else
    {
       oks = "NO OK";
    }
    qInfo()<<"Data sent"<<oks;


    const QString text = QString("0");

    ui->textEdit->setHtml(text);
\
}



deletefrdb::~deletefrdb()
{
    delete ui;
}
