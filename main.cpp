#include "calculatorlogic.h"
#include "calculatormview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
    Calculator w;
    w.show();
    */

    CalculatorMView *m_view = new CalculatorMView();
    //CalculatorMView m_view;
    CalculatorLogic *m_calculator = new CalculatorLogic(m_view);

    return a.exec();
}
