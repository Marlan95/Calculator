#include "logicclass.h"
#include "testingwindow.h"
#include "ui_testingwindow.h"

TestingWindow::TestingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestingWindow)
{
    ui->setupUi(this);
    LogicClass *logic = new LogicClass;
}

TestingWindow::~TestingWindow()
{
    delete ui;
}
