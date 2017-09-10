/********************************************************************************
** Form generated from reading UI file 'querywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWINDOW_H
#define UI_QUERYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_querywindow
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *querywindow)
    {
        if (querywindow->objectName().isEmpty())
            querywindow->setObjectName(QStringLiteral("querywindow"));
        querywindow->resize(640, 480);
        querywindow->setMinimumSize(QSize(640, 480));
        querywindow->setMaximumSize(QSize(640, 480));
        tableWidget = new QTableWidget(querywindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 621, 461));

        retranslateUi(querywindow);

        QMetaObject::connectSlotsByName(querywindow);
    } // setupUi

    void retranslateUi(QDialog *querywindow)
    {
        querywindow->setWindowTitle(QApplication::translate("querywindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class querywindow: public Ui_querywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWINDOW_H
