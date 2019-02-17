#include "widget.h"
#include "ui_widget.h"
#include <QFormLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QFormLayout *lay = new QFormLayout(this);
    QLineEdit *name =new QLineEdit();
    lay->addRow("&Name",name);
    QLineEdit *email =new QLineEdit();
    lay->addRow("&Email",email);

    QLineEdit *age =new QLineEdit();
    //插入到下标1的位置
    lay->insertRow(1,"&Age",age);

    QLabel *info = new QLabel();
    info->setText("input");

    info->setStyleSheet("color:red");
    lay->insertRow(0,"",info);

    QPushButton *save = new QPushButton("Save");
    QPushButton *clear =new QPushButton("Clear");

    connect(save,SIGNAL(clicked()),this,SLOT(Save()));
    connect(clear,SIGNAL(clicked()),this,SLOT(Clear()));

    //添加一个平行布局器
    QHBoxLayout *hlay = new QHBoxLayout();
    hlay->addWidget(save);
    hlay->addWidget(clear);
    lay->addRow(hlay);

}

void Widget::Save()
{
    //找到layout
    QFormLayout *lay = (QFormLayout *)this->layout();
    //显示错误信息label
    QLabel *label = (QLabel *)lay->itemAt(0,QFormLayout::FieldRole)->widget();
    //存放错误信息
    QString error ="";

    //遍历所有QLineEdit
    //遍历FormLayout的所有元素
    for(int i=0;i<lay->rowCount();i++)
    {
        //获取输入框
        QLayoutItem *item = lay->itemAt(i,QFormLayout::FieldRole);
        QLineEdit *e = (QLineEdit *)item->widget();
        if(!e)continue;

        QLayoutItem *layItem = lay->itemAt(i,QFormLayout::LabelRole);
        if(!layItem)continue;

        QLabel * titleLabel = (QLabel *)layItem->widget();
        if(!titleLabel)continue;
        QString title = titleLabel->text();



        QString cname = e->metaObject()->className();
        if(cname == "QLineEdit")
        {
            if(e->text().trimmed()=="")
            {
                e->setFocus();
                error += title;
                error += " is empty!\n";

            }
        }
    }
    //设置错误显示
    label->setText(error);

}
void Widget::Clear()
{
    QFormLayout *lay = (QFormLayout *)this->layout();
    for(int i=0;i<lay->rowCount();i++)
    {
        QLayoutItem *item = lay->itemAt(i,QFormLayout::FieldRole);
        QLineEdit *e = (QLineEdit *)item->widget();
        if(!e)
        {
            continue;
        }
        QString cname = e->metaObject()->className();
        if(cname == "QLineEdit")
        {
            e->setText("");
        }
    }
}



Widget::~Widget()
{
    delete ui;
}
