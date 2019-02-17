#include "testwidgetrect.h"
#include <QtWidgets/QApplication>
#include <QThread>
#include <XThread.h>

//class XThread :public QThread
//{
//public:
//	QWidget *w = NULL;
//	void run()
//	{
//		for (int x = 0; x < 1000; x++)
//		{
//			w->move(0, 0);
//		}
//	}
//};
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testWidgetRect w;
	w.show();
	QRect re = w.geometry();
	//w.setGeometry(0, 0, 800, 600);
	XThread xt;
	QObject::connect(&xt, SIGNAL(Move(int, int)), &w, SLOT(move(int, int)));

	xt.w = &w;
	xt.start();

	return a.exec();
}
