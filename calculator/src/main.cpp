#include <QApplication>
#include "calculator.h"
#include "ui_calculator.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window(nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.number1 = calculator.number1;
    window.number2 = calculator.number2;
    window.result = calculator.result;
    window.show();
    return QApplication::exec();
}
