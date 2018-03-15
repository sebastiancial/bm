/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *bitocoincourse;
    QLCDNumber *course_dig;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(20, 480, 240, 75));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setIconSize(QSize(20, 20));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 390, 240, 75));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 480, 240, 75));
        pushButton_3->setFont(font);
        bitocoincourse = new QLabel(centralWidget);
        bitocoincourse->setObjectName(QStringLiteral("bitocoincourse"));
        bitocoincourse->setGeometry(QRect(20, 20, 341, 61));
        course_dig = new QLCDNumber(centralWidget);
        course_dig->setObjectName(QStringLiteral("course_dig"));
        course_dig->setGeometry(QRect(380, 20, 351, 61));
        course_dig->setLayoutDirection(Qt::RightToLeft);
        course_dig->setMidLineWidth(0);
        course_dig->setSmallDecimalPoint(false);
        course_dig->setDigitCount(10);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(750, 10, 31, 81));
        QFont font1;
        font1.setPointSize(35);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 130, 351, 301));
        label_2->setPixmap(QPixmap(QString::fromUtf8("release/images/bitcoin-225079_1280.png")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Connect to the database", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Check the database", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Draw a chart", Q_NULLPTR));
        bitocoincourse->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Current bitcoin course:</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "$", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
