#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
   QObjectList cs = this->children();
   for (int i=0;i<cs.size();i++)
   {
        qDebug()<<cs[i]->objectName();
   }

}

Widget::~Widget()
{
    delete ui;
}
