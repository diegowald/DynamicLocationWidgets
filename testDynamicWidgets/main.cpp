#include "mainwindow.h"
#include "mainwindow2.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MainWindow2 w2;
    w2.show();
    return a.exec();
}
