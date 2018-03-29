#include "testingwindow.h"
//#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestingWindow w;
    w.show();

    return a.exec();
}
