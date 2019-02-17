/********************************************************************************
** Form generated from reading UI file 'testweiget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWEIGET_H
#define UI_TESTWEIGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testweigetClass
{
public:

    void setupUi(QWidget *testweigetClass)
    {
        if (testweigetClass->objectName().isEmpty())
            testweigetClass->setObjectName(QStringLiteral("testweigetClass"));
        testweigetClass->resize(600, 400);

        retranslateUi(testweigetClass);

        QMetaObject::connectSlotsByName(testweigetClass);
    } // setupUi

    void retranslateUi(QWidget *testweigetClass)
    {
        testweigetClass->setWindowTitle(QApplication::translate("testweigetClass", "testweiget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testweigetClass: public Ui_testweigetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWEIGET_H
