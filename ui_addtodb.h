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

QT_BEGIN_NAMESPACE

class Ui_addtodb
{
public:

    void setupUi(QDialog *addtodb)
    {
        if (addtodb->objectName().isEmpty())
            addtodb->setObjectName(QStringLiteral("addtodb"));
        addtodb->resize(400, 300);

        retranslateUi(addtodb);

        QMetaObject::connectSlotsByName(addtodb);
    } // setupUi

    void retranslateUi(QDialog *addtodb)
    {
        addtodb->setWindowTitle(QApplication::translate("addtodb", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addtodb: public Ui_addtodb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTODB_H
