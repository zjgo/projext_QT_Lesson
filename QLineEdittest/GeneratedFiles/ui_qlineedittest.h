/********************************************************************************
** Form generated from reading UI file 'qlineedittest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLINEEDITTEST_H
#define UI_QLINEEDITTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLineEdittestClass
{
public:

    void setupUi(QWidget *QLineEdittestClass)
    {
        if (QLineEdittestClass->objectName().isEmpty())
            QLineEdittestClass->setObjectName(QStringLiteral("QLineEdittestClass"));
        QLineEdittestClass->resize(600, 400);

        retranslateUi(QLineEdittestClass);

        QMetaObject::connectSlotsByName(QLineEdittestClass);
    } // setupUi

    void retranslateUi(QWidget *QLineEdittestClass)
    {
        QLineEdittestClass->setWindowTitle(QApplication::translate("QLineEdittestClass", "QLineEdittest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QLineEdittestClass: public Ui_QLineEdittestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLINEEDITTEST_H
