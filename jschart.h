#ifndef JSCHART_H
#define JSCHART_H


#include <QDialog>
#include <QtCharts>
#include <QtWidgets>




using namespace QtCharts;

namespace Ui {
class jschart;
}

class jschart : public QDialog
{
    Q_OBJECT

public:
    explicit jschart(QWidget *parent = 0);
    ~jschart();

private:
    QLineSeries *series = new QLineSeries();
    Ui::jschart *ui;
};

#endif // JSCHART_H
