/********************************************************************************
** Form generated from reading UI file 'addtodb.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTODB_H
#define UI_ADDTODB_H

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

class Ui_addtodb
{
public:
    QLabel *bitocoincourse;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *addtodb)
    {
        if (addtodb->objectName().isEmpty())
            addtodb->setObjectName(QStringLiteral("addtodb"));
        addtodb->resize(800, 600);
        bitocoincourse = new QLabel(addtodb);
        bitocoincourse->setObjectName(QStringLiteral("bitocoincourse"));
        bitocoincourse->setGeometry(QRect(30, 30, 731, 61));
        textEdit = new QTextEdit(addtodb);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 110, 621, 71));
        QFont font;
        font.setPointSize(12);
        textEdit->setFont(font);
        textEdit->setOverwriteMode(false);
        pushButton = new QPushButton(addtodb);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 181, 81));
        QFont font1;
        font1.setPointSize(20);
        pushButton->setFont(font1);

        retranslateUi(addtodb);

        QMetaObject::connectSlotsByName(addtodb);
    } // setupUi

    void retranslateUi(QDialog *addtodb)
    {
        addtodb->setWindowTitle(QApplication::translate("addtodb", "Dialog", Q_NULLPTR));
        bitocoincourse->setText(QApplication::translate("addtodb", "<html><head/><body><p><span style=\" font-size:20pt;\">Write data (Time[Epoch], Value[$], Volume):</span></p></body></html>", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("addtodb", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addtodb", "SEND", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addtodb: public Ui_addtodb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTODB_H
