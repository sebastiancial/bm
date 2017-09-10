#include "querywindow.h"
#include "ui_querywindow.h"
#include "mainwindow.h"

//global variable
QSqlQuery queryshare;



querywindow::querywindow(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::querywindow)
{

    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);// Ja nie mogę... wszystko trzeba po tym deklarować...

    ui->tableWidget->setRowCount(queryshare.size());
    ui->tableWidget->setColumnCount(queryshare.record().count());

    queryshare.first();

    for(int m=0;m<queryshare.size();m++)
    {

        for(int n=0;n<queryshare.record().count();n++)
        {
            QString querytxt=queryshare.value(n).toString();
            ui->tableWidget->setItem(m,n,new QTableWidgetItem(querytxt));

        }
        queryshare.next();
    }



}

querywindow::~querywindow()
{
    delete ui;
}


