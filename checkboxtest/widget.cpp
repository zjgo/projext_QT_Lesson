#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup * group =new QButtonGroup(this);
    //加组后默认的单选
    group->addButton(ui->checkBox1);
    group->addButton(ui->checkBox2);
    group->addButton(ui->checkBox3);
    //改为多选
    //group->setExclusive(false);
    //手动点击事件
    connect(group,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(GClick(QAbstractButton*)));
    //状态变化事件
    connect(group,SIGNAL(buttonToggled(QAbstractButton*,bool)),this,SLOT(GToggle(QAbstractButton*,bool)));

}
void Widget::GClick(QAbstractButton *but)
{
    qDebug()<<"GClick: "<<but<<but->isChecked();
}
void Widget::GToggle(QAbstractButton *but,bool check)
{
    qDebug()<<"GToggle: "<<but<<check;
}

Widget::~Widget()
{
    delete ui;
}
