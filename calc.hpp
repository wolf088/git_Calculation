#ifndef _CALC_H_
#define _CALC_H_

class Calculation{
    private:
        double num1;
        double num2;
    public:
        Calculation();                  //コンストラクタ
        void setNum1(double num);       //１つ目の数を設定
        void setNum2(double num);       //２つ目の数を設定
        double add();                   //加算
        double sub();                   //減算
        double mul();                   //乗算
        double div();                   //除算
};

#endif // _CALC_H_