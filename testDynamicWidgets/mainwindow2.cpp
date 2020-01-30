#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    tw1 = nullptr;
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayout_2->insertWidget(0, tw1);
}

void MainWindow2::on_pushButton_2_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayout_2->insertWidget(ui->verticalLayout_2->count() - 1, tw1);
}

void MainWindow2::on_pushButton_3_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayout_2->addWidget(tw1);
}

void MainWindow2::on_pushButton_4_clicked()
{
    if (tw1 != nullptr)
    {
        ui->verticalLayout_2->removeWidget(tw1);
        tw1 = nullptr;
    }
}
