#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QtSql>

//global variables
extern QSqlQuery queryshare;
extern QDate transport[1000];


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

    void on_pushButton_3_clicked();

private:
    bool drawShapes=0;




    Ui::MainWindow *ui;

};





#endif // MAINWINDOW_H
