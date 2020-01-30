#include "testwidget1.h"
#include "ui_testwidget1.h"

TestWidget1::TestWidget1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWidget1)
{
    ui->setupUi(this);
}

TestWidget1::~TestWidget1()
{
    delete ui;
}
