#include "widget.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();
    QWidget *win =new QWidget();
    win->resize(400,400);

    //垂直布局 构造函数中传递widget
    QVBoxLayout *lay =new QVBoxLayout();
    win->setLayout(lay);

    QPushButton *but1=new QPushButton("button1");
    lay->addWidget(but1);
    //水平，垂直 fixed使用推荐大小
    but1->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);

    but1->setMinimumSize(300,50);
    but1->setMaximumSize(500,100);


    QPushButton *but2=new QPushButton("button2");
    //尽量拉伸，最小推荐大小
    //but2->setSizePolicy(QSizePolicy::Expanding ,QSizePolicy::Expanding);

    lay->addWidget(but2);



    QPushButton *but3=new QPushButton("button3");
    //忽略推荐大小，尽量缩放
    //but3->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);

    lay->addWidget(but3);

    //设置边框距离
    lay->setContentsMargins(0,0,0,0);
    //设置元素距离
    lay->setSpacing(10);


    win->show();
    qDebug()<<but1->sizeHint().width()<<":"<<but1->sizeHint().height();

    qDebug()<<but1->width()<<":"<<but1->height();
    return a.exec();
}
