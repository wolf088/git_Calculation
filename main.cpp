#include <iostream>
#include "calc.hpp"

using namespace std;

int main(){
    Calculation ins;
    int num;
    char mark;                                  //演算子

    //１つ目の数の入力
    cout << "１つ目の数を入力してください：";
    cin >> num;
    ins.setNum1(num);

    //演算子の入力
    cout << "演算子を入力してください（+：加算、-：減算、*：乗算、/：除算）：";
    cin >> mark;

    //２つ目の数の入力
    cout << "２つ目の数を入力してください：";
    cin >> num;
    ins.setNum2(num);

    //演算
    if (mark == '+'){
        cout << "答：" << ins.add() << endl;
    }
    else if (mark == '-'){
        cout << "答：" << ins.sub() << endl;
    }
    else if (mark == '*'){
        cout << "答：" << ins.mul() << endl;
    }
    else if (mark == '/'){
        cout << "答：" << ins.div() << endl;
    }

    return 0;
}