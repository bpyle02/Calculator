#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
    double firstNum;
    bool isTyping;

private slots:
    void digitPressed();
    void unaryOperationPressed();
    void binaryOperationPressed();

    void on_pushButton_decimal_released();
    void on_pushButton_clear_released();
    void on_pushButton_equals_released();
};
#endif // CALCULATOR_H
