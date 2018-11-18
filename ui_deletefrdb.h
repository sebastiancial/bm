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

QT_BEGIN_NAMESPACE

class Ui_deletefrdb
{
public:

    void setupUi(QDialog *deletefrdb)
    {
        if (deletefrdb->objectName().isEmpty())
            deletefrdb->setObjectName(QStringLiteral("deletefrdb"));
        deletefrdb->resize(400, 300);

        retranslateUi(deletefrdb);

        QMetaObject::connectSlotsByName(deletefrdb);
    } // setupUi

    void retranslateUi(QDialog *deletefrdb)
    {
        deletefrdb->setWindowTitle(QApplication::translate("deletefrdb", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deletefrdb: public Ui_deletefrdb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFRDB_H
