/********************************************************************************
** Form generated from reading UI file 'qlabeltest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLABELTEST_H
#define UI_QLABELTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QLabelTestClass
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *QLabelTestClass)
    {
        if (QLabelTestClass->objectName().isEmpty())
            QLabelTestClass->setObjectName(QStringLiteral("QLabelTestClass"));
        QLabelTestClass->resize(600, 400);
        label = new QLabel(QLabelTestClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 321, 131));
        label->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 0, 0);\n"
"text-decoration: underline;\n"
"font: 28pt \"\351\273\221\344\275\223\";\n"
"border-radius:25px\n"
"}\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:reflect, x1:1, y1:0.506, x2:1, y2:0, stop:0.174129 rgba(162, 93, 183, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton::!hover{\n"
"background-color: qlineargradient(spread:reflect, x1:1, y1:0.517, x2:1, y2:0, stop:0 rgba(255, 0, 234, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"	"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(QLabelTestClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 230, 201, 151));

        retranslateUi(QLabelTestClass);

        QMetaObject::connectSlotsByName(QLabelTestClass);
    } // setupUi

    void retranslateUi(QWidget *QLabelTestClass)
    {
        QLabelTestClass->setWindowTitle(QApplication::translate("QLabelTestClass", "QLabelTest", Q_NULLPTR));
        label->setText(QApplication::translate("QLabelTestClass", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("QLabelTestClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QLabelTestClass: public Ui_QLabelTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLABELTEST_H
