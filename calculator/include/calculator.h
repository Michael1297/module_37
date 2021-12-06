#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>


class CalculatorMainWindow : public QMainWindow {
Q_OBJECT

public:
    QLineEdit* number1 = nullptr;    //1 число
    QLineEdit* number2 = nullptr;  //2 число
    QLineEdit* result = nullptr;  //результат
    CalculatorMainWindow (QWidget* parent = nullptr): QMainWindow(parent){}

private:
    bool correct(QLineEdit* number);

public slots:
    void plus();                //сложение
    void minus();               //вычитание
    void multiplication();      //умножение
    void division();            //деление
};