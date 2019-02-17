#include "qlabeltest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLabelTest w;
	w.show();
	return a.exec();
}
