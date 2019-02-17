#pragma once

#include <QtWidgets/QWidget>
#include "ui_testweiget.h"

class testweiget : public QWidget
{
	Q_OBJECT

public:
	testweiget(QWidget *parent = Q_NULLPTR);

private:
	Ui::testweigetClass ui;
};
