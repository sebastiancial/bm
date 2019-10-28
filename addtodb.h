#ifndef ADDTODB_H
#define ADDTODB_H

#endif // ADDTODB_H

#include <QDialog>


namespace Ui {
class addtodb;
}

class addtodb : public QDialog
{
    Q_OBJECT

public:
    explicit addtodb(QWidget *parent = 0);


    ~addtodb();

private:

    Ui::addtodb *ui;
};
