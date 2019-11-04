#ifndef DELETEFRDB_H
#define DELETEFRDB_H

#endif // DELETEFRDB_H

#include <QDialog>


namespace Ui {
class deletefrdb;
}

class deletefrdb : public QDialog
{
    Q_OBJECT

public:
    explicit deletefrdb(QWidget *parent = 0);


    ~deletefrdb();


private slots:

        void on_pushButton_clicked();

private:

    Ui::deletefrdb *ui;
};
