#pragma once

#include <QtWidgets/QWidget>
#include "ui_testwidgetrect.h"

class testWidgetRect : public QWidget
{
	Q_OBJECT

public:
	testWidgetRect(QWidget *parent = Q_NULLPTR);

public slots:
void move(int x, int y)
{
	QWidget::move(x, y);
	}

private:
	Ui::testWidgetRectClass ui;
};
