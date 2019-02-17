//#include "testweiget.h"
#include <QtWidgets/QApplication>
#include <QWidget>
#include <QThread>
#include <XWidget.h>
static XWidget *w=NULL;
class XThread : public QThread
{
public:
	void run()
	{
		//w->show();
		msleep(3000);
		w->Hide();
	}
};

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	w = new XWidget();
	XThread xt;
	
	w->show();
	QThread::msleep(3000);
	//w->hide();
	xt.start();
	//testweiget w;
	//QWidget w;
	//w.setWindowTitle("My widget");
	//w.show();


	return a.exec();
}
