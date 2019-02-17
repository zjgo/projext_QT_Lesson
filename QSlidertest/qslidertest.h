#ifndef QSLIDERTEST_H
#define QSLIDERTEST_H

#include <QWidget>

namespace Ui {
class QSlidertest;
}

class QSlidertest : public QWidget
{
    Q_OBJECT

public:
    explicit QSlidertest(QWidget *parent = 0);
    ~QSlidertest();

private:
    Ui::QSlidertest *ui;
};

#endif // QSLIDERTEST_H
