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

private:

    Ui::deletefrdb *ui;
};
