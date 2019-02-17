#include "qslidertest.h"
#include "ui_qslidertest.h"

QSlidertest::QSlidertest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QSlidertest)
{
    ui->setupUi(this);
}

QSlidertest::~QSlidertest()
{
    delete ui;
}
