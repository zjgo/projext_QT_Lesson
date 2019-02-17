#pragma once

#include <QtWidgets/QWidget>
#include "ui_qlineedittest.h"

class QLineEdittest : public QWidget
{
	Q_OBJECT

public:
	QLineEdittest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QLineEdittestClass ui;
};
