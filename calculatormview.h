#ifndef CALCULATORMVIEW_H
#define CALCULATORMVIEW_H

#include <QWidget>

namespace Ui {
class CalculatorMView;
}

class CalculatorMView : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorMView(QWidget *parent = 0);
    ~CalculatorMView();

private:
    Ui::CalculatorMView *ui;
};

#endif // CALCULATORMVIEW_H
