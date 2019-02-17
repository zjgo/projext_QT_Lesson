#pragma once
#include "qthread.h"
class XThread :
	public QThread
{
	Q_OBJECT
public:
	QWidget *w = NULL;
		void run()
		{
			for (int x = 0; x < 1000; x++)
			{
				Move(x, x);
				msleep(100);
			}
		}
	XThread();
	~XThread();
signals:
	void Move(int x, int y);
};

