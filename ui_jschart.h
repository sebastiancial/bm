/********************************************************************************
** Form generated from reading UI file 'jschart.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JSCHART_H
#define UI_JSCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jschart
{
public:
    QWidget *chart;

    void setupUi(QDialog *jschart)
    {
        if (jschart->objectName().isEmpty())
            jschart->setObjectName(QStringLiteral("jschart"));
        jschart->setWindowModality(Qt::NonModal);
        jschart->resize(800, 600);
        chart = new QWidget(jschart);
        chart->setObjectName(QStringLiteral("chart"));
        chart->setGeometry(QRect(10, 10, 781, 491));

        retranslateUi(jschart);

        QMetaObject::connectSlotsByName(jschart);
    } // setupUi

    void retranslateUi(QDialog *jschart)
    {
        jschart->setWindowTitle(QApplication::translate("jschart", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class jschart: public Ui_jschart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSCHART_H
