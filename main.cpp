#include <iostream>
#include "calc.hpp"

using namespace std;

int main(){
    Calculation ins;
    ins.setNum1(10);
    ins.setNum2(2);
    cout << ins.getNum1() << " + " << ins.getNum2() << " = "
     << ins.add() << endl;
    cout << ins.getNum1() << " - " << ins.getNum2() << " = "
     << ins.sub() << endl;
    cout << ins.getNum1() << " * " << ins.getNum2() << " = "
     << ins.mul() << endl;
    cout << ins.getNum1() << " / " << ins.getNum2() << " = "
     << ins.div() << endl;
    
    return 0;
}