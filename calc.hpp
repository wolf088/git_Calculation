#ifndef _CALC_H_
#define _CALC_H_

class Calculation{
    private:
        double num1;
        double num2;
    public:
        Calculation();                  //コンストラクタ
        void setNum1(double num);       //１つ目の数を設定
        void setNum2(double num);       //
        double getNum1();               //
        double getNum2();               //
        double add();                   //
        double sub();                   //
        double mul();                   //
        double div();                   //
};

#endif // _CALC_H_