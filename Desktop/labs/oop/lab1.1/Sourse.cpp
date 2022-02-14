//Sourse.cpp

#include <iostream>
#include "FloatPower.h"

using namespace std;

int main(){
    FloatPower fp1, fp2;

    cout << "FloatPower1:" << endl;
    fp1.read();
    fp1.power();
    fp1.display();

    cout << "FloatPower2:" << endl;
    fp2.set_first(6);
    fp2.set_second(4);
    fp2.init(fp2.get_first(), fp2.get_second());

    system("pause");

    return 0;
}