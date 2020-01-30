#ifndef TESTWIDGET1_H
#define TESTWIDGET1_H

#include <QWidget>

namespace Ui {
class TestWidget1;
}

class TestWidget1 : public QWidget
{
    Q_OBJECT

public:
    explicit TestWidget1(QWidget *parent = nullptr);
    ~TestWidget1();

private:
    Ui::TestWidget1 *ui;
};

#endif // TESTWIDGET1_H
