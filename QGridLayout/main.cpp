#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

        QWidget *win =new QWidget();
        QGridLayout *g1= new QGridLayout(win);
        QPushButton *but11= new QPushButton("but11");
        g1->addWidget(but11,0,0);
        QPushButton *but12= new QPushButton("but12");
        but12->setMinimumSize(100,100);
        but12->setMaximumSize(300,300);
        but12->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        g1->addWidget(but12,0,1);
        QPushButton *but13= new QPushButton("but13");
        g1->addWidget(but13,0,2);
        QPushButton *but21= new QPushButton("but21");
        g1->addWidget(but21,1,0);
        QPushButton *but23= new QPushButton("but23");
        g1->addWidget(but23,1,2);

        //水平间距
        g1->setHorizontalSpacing(10);
        //垂直间距
        g1->setVerticalSpacing(10);


    win->show();

    return a.exec();
}
