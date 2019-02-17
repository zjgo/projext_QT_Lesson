#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("整型数字");
    QIntValidator *IVal = new QIntValidator();
    IVal->setRange(0,255);
    ui->lineEdit->setValidator(IVal);
    ui->IP_Edit->setInputMask("000.000.000.000;_");
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        ui->label->setText(ui->IP_Edit->text());
    });
}

Widget::~Widget()
{
    delete ui;
}
