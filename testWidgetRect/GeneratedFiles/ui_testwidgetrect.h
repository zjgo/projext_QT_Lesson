/********************************************************************************
** Form generated from reading UI file 'testwidgetrect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGETRECT_H
#define UI_TESTWIDGETRECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testWidgetRectClass
{
public:

    void setupUi(QWidget *testWidgetRectClass)
    {
        if (testWidgetRectClass->objectName().isEmpty())
            testWidgetRectClass->setObjectName(QStringLiteral("testWidgetRectClass"));
        testWidgetRectClass->resize(600, 400);

        retranslateUi(testWidgetRectClass);

        QMetaObject::connectSlotsByName(testWidgetRectClass);
    } // setupUi

    void retranslateUi(QWidget *testWidgetRectClass)
    {
        testWidgetRectClass->setWindowTitle(QApplication::translate("testWidgetRectClass", "testWidgetRect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testWidgetRectClass: public Ui_testWidgetRectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGETRECT_H
