#include "calc.hpp"

//初期化
Calculation::Calculation() : num1(0), num2(0){
}

//１つ目の数を設定
void Calculation::setNum1(double num){
    num1 = num;
}

//
void Calculation::setNum2(double num){
    num2 = num;
}

//
double Calculation::getNum1(){
    return num1;
}

//
double Calculation::getNum2(){
    return num2;
}

//
double Calculation::add(){
    return num1 + num2;
}

//
double Calculation::sub(){
    return num1 - num2;
}

//
double Calculation::mul(){
    return num1 * num2;
}

//
double Calculation::div(){
    return num1 / num2;
}