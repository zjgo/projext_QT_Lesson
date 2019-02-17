#ifndef QRADIOBUTTONTEST_H
#define QRADIOBUTTONTEST_H

#include <QWidget>

namespace Ui {
class QRadioButtonTest;
}

class QRadioButtonTest : public QWidget
{
    Q_OBJECT

public:
    explicit QRadioButtonTest(QWidget *parent = 0);
    ~QRadioButtonTest();
public slots:
    void Save();

private:
    Ui::QRadioButtonTest *ui;
};

#endif // QRADIOBUTTONTEST_H
