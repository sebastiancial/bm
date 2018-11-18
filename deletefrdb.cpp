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

deletefrdb::~deletefrdb()
{
    delete ui;
}
