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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_querywindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;

    void setupUi(QDialog *querywindow)
    {
        if (querywindow->objectName().isEmpty())
            querywindow->setObjectName(QStringLiteral("querywindow"));
        querywindow->setWindowModality(Qt::NonModal);
        querywindow->setEnabled(true);
        querywindow->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(querywindow->sizePolicy().hasHeightForWidth());
        querywindow->setSizePolicy(sizePolicy);
        querywindow->setMinimumSize(QSize(640, 480));
        querywindow->setMaximumSize(QSize(640, 16000));
        gridLayout = new QGridLayout(querywindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(querywindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        tableWidget = new QTableWidget(querywindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);


        retranslateUi(querywindow);

        QMetaObject::connectSlotsByName(querywindow);
    } // setupUi

    void retranslateUi(QDialog *querywindow)
    {
        querywindow->setWindowTitle(QApplication::translate("querywindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("querywindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Bitcoin exchange rate</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class querywindow: public Ui_querywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWINDOW_H
