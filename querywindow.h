#ifndef QUERYWINDOW_H
#define QUERYWINDOW_H

#include <QDialog>
#include <QTableWidget>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QHeaderView>
#include <QDate>
#include "time.h"



namespace Ui {
class querywindow;
}

class querywindow : public QDialog
{
    Q_OBJECT

public:
    explicit querywindow(QWidget *parent = 0);



    ~querywindow();

private slots:


private:


    Ui::querywindow *ui;
};




#endif // QUERYWINDOW_H
