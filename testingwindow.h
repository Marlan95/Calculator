#ifndef TESTINGWINDOW_H
#define TESTINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class TestingWindow;
}

class TestingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestingWindow(QWidget *parent = 0);
    ~TestingWindow();

private:
    Ui::TestingWindow *ui;
};

#endif // TESTINGWINDOW_H
