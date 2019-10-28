#include "addtodb.h"
#include "ui_addtodb.h"
#include "mainwindow.h"

//global variable



addtodb::addtodb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addtodb)
{
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);
    this->setWindowTitle("Add Data");


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

    QSqlQuery query(db);
    query.exec("INSERT INTO btc (date,value,volume) Values (,100,100)");





}

addtodb::~addtodb()
{
    delete ui;
}
