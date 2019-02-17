#pragma once

#include <QtWidgets/QWidget>
#include "ui_qlabeltest.h"

class QLabelTest : public QWidget
{
	Q_OBJECT

public:
	QLabelTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QLabelTestClass ui;
};
