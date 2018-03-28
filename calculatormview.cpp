#include "calculatormview.h"
#include "ui_calculatormview.h"

CalculatorMView::CalculatorMView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatorMView)
{
    ui->setupUi(this);
}

CalculatorMView::~CalculatorMView()
{
    delete ui;
}
