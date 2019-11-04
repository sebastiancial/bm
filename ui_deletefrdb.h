/********************************************************************************
** Form generated from reading UI file 'deletefrdb.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFRDB_H
#define UI_DELETEFRDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_deletefrdb
{
public:
    QLabel *bitocoincourse;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *deletefrdb)
    {
        if (deletefrdb->objectName().isEmpty())
            deletefrdb->setObjectName(QStringLiteral("deletefrdb"));
        deletefrdb->resize(600, 250);
        bitocoincourse = new QLabel(deletefrdb);
        bitocoincourse->setObjectName(QStringLiteral("bitocoincourse"));
        bitocoincourse->setGeometry(QRect(30, 30, 281, 61));
        pushButton = new QPushButton(deletefrdb);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 120, 161, 91));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        textEdit = new QTextEdit(deletefrdb);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 40, 121, 51));
        textEdit->setFont(font);

        retranslateUi(deletefrdb);

        QMetaObject::connectSlotsByName(deletefrdb);
    } // setupUi

    void retranslateUi(QDialog *deletefrdb)
    {
        deletefrdb->setWindowTitle(QApplication::translate("deletefrdb", "Dialog", Q_NULLPTR));
        bitocoincourse->setText(QApplication::translate("deletefrdb", "<html><head/><body><p><span style=\" font-size:20pt;\">Delete record no: </span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("deletefrdb", "DELETE", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("deletefrdb", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deletefrdb: public Ui_deletefrdb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFRDB_H
