#pragma once
#include "qwidget.h"
class XWidget :
	public QWidget
{
	Q_OBJECT

public:
	XWidget();
	virtual ~XWidget();
signals:
	void Hide();
};

