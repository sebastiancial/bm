#include "querywindow.h"
#include "ui_querywindow.h"
#include "mainwindow.h"


querywindow::querywindow(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::querywindow)
{

    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);

    ui->setupUi(this);// Ja nie mogę... wszystko trzeba po tym deklarować...
    this->setWindowTitle("Data Table");

    //refresh database
    QSqlDatabase db;
    QSqlQuery query(db);
    query.exec("SELECT * FROM `btc` ;");
    queryshare = query;



    //edycja wyglądu okna
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(queryshare.size());
    ui->tableWidget->setColumnCount(queryshare.record().count());
    ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("ID"));
    ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Date"));
    ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Value"));
    ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Volume"));
    ui->tableWidget->setColumnWidth(0, 130);
    ui->tableWidget->setColumnWidth(1, 155);
    ui->tableWidget->setColumnWidth(2, 150);
    ui->tableWidget->setColumnWidth(3, 155);


    queryshare.first();

    for(int m=0;m<queryshare.size();m++)
    {

        for(int n=0;n<queryshare.record().count();n++)
        {
            QString querytxt=queryshare.value(n).toString();
            if (n==1){
                int intdate = querytxt.toInt();
                time_t tdate = intdate;
                struct tm * timeinfo;
                char buffer [80];

                timeinfo = localtime ( &tdate );
                strftime (buffer,80," %d/%m/%y ",timeinfo);
                querytxt=buffer;

                //QString transportstring = buffer;
                //QDate transport[n]=QDate::fromString(transportstring,"dd/MM/yyyy");


            }
            ui->tableWidget->setItem(m,n,new QTableWidgetItem(querytxt));

        }
        queryshare.next();
    }



}

querywindow::~querywindow()
{
    delete ui;
}


