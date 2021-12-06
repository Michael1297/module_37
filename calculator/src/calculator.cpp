#include "calculator.h"

bool CalculatorMainWindow::correct(QLineEdit* number){
    if(number->text().isEmpty() || number->text().size() == 1 && (number->text().front() == '-' || number->text().front() == '.')) return false;
    bool skip = (number->text().front() == '-'); //1 символ минус
    int point = 0;                               //количество точек
    for(auto& x : number->text()){
        if(skip){                                //скип 1 символ если это минус
            skip = false;
            continue;
        } else if(((x < '0' || x > '9') && x != '.') || point > 1) return false;
        else if(x == '.') point++;              //счетчик  точек
    }
    return true;
}


void CalculatorMainWindow::plus(){
    if(this->correct(number1) && this->correct(number2))
        result->setText(QString::number(number1->text().toDouble() + number2->text().toDouble()));
    else result->setText("ERROR");
}

void CalculatorMainWindow::minus() {
    if(this->correct(number1) && this->correct(number2))
        result->setText(QString::number(number1->text().toDouble() - number2->text().toDouble()));
    else result->setText("ERROR");
}

void CalculatorMainWindow::multiplication(){
    if(this->correct(number1) && this->correct(number2))
        result->setText(QString::number(number1->text().toDouble() * number2->text().toDouble()));
    else result->setText("ERROR");
}

void CalculatorMainWindow::division(){                                              //деление на 0
    if(this->correct(number1) && this->correct(number2) && number2->text().toDouble() != 0)
        result->setText(QString::number(number1->text().toDouble() / number2->text().toDouble()));
    else result->setText("ERROR");
}