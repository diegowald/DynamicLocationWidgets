#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tw1 = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayoutTest->insertWidget(0, tw1);
}

void MainWindow::on_pushButton_2_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayoutTest->insertWidget(ui->verticalLayoutTest->count() - 1, tw1);
}

void MainWindow::on_pushButton_3_clicked()
{
    tw1 = new TestWidget1(this);
    ui->verticalLayoutTest->addWidget(tw1);

    ui->verticalLayoutTest->removeWidget(tw1);
}

void MainWindow::on_pushButton_4_clicked()
{
    if (tw1 != nullptr)
     {
        ui->verticalLayoutTest->removeWidget(tw1);
        tw1 = nullptr;
    }
}
