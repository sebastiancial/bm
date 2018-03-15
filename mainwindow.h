#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QtSql>

#include <QNetworkAccessManager>
#include <QtNetwork>
#include <QNetworkRequest>
#include <QNetworkReply>


//global variables
extern QSqlQuery queryshare;


namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QSqlDatabase db;





    ~MainWindow();


public slots:



private slots:
    void on_pushButton_clicked();
    void paintEvent(QPaintEvent *);
    void on_pushButton_2_clicked();
    void urlRead();
    void urlFinished();
    void on_pushButton_3_clicked(); 
    void saveJson(QJsonDocument document, QString fileName);


signals:
    void sig_var();

private:
    bool drawShapes=0;
    QByteArray buffer;
    QNetworkReply *reply;
    QJsonDocument jsondoc;
    //double bitvar;
    void showvar(QJsonValue val3);




    Ui::MainWindow *ui;

};




#endif // MAINWINDOW_H
