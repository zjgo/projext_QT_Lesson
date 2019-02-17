#include "qslidertest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSlidertest w;
    w.show();

    return a.exec();
}
