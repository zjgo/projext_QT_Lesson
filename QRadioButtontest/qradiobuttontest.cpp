#include "qradiobuttontest.h"
#include "ui_qradiobuttontest.h"
#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QButtonGroup>
#include <QMessageBox>

QRadioButtonTest::QRadioButtonTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QRadioButtonTest)
{
    ui->setupUi(this);
    QRadioButton *rb1 = new QRadioButton("QRadioButton001");
    QRadioButton *rb2 = new QRadioButton("QRadioButton002");
    QRadioButton *rb3 = new QRadioButton("QRadioButton003");

    //按钮组
    QButtonGroup *group = new QButtonGroup(this);
    group->setObjectName("group");

    group->addButton(rb1);
    group->addButton(rb2);
    group->addButton(rb3);


    //垂直布局器
    QVBoxLayout *vb = new QVBoxLayout(this);

    //遍历按钮组
    for(int i=0;i < group->buttons().size();i++)
    {
        vb->addWidget(group->buttons()[i]);
    }
    //保存按钮
    QPushButton *save = new QPushButton("Save");
    connect(save,SIGNAL(clicked()),this,SLOT(Save()));

    vb->addWidget(save);
}
void QRadioButtonTest::Save()
{
    //获取案件组
    QButtonGroup *group = this->findChild<QButtonGroup *>("group");
    if(!group)return;

    //获取被选中的按钮
    QRadioButton *but = (QRadioButton *)group->checkedButton();
    if(!but)
    {

        return;
    }
    QMessageBox::information(this,"",but->text());
}

QRadioButtonTest::~QRadioButtonTest()
{
    delete ui;
}
