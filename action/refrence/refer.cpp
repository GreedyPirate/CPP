#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;


int main() {
    int a = 10;
    int b = 20;

    int& refA = a;

    refA = b; // 这不叫改变引用的指向，相当于 a = b的赋值操作
    cout << refA << endl;

    b = 30;  // refA没变
    cout << refA << endl;

    a = 40;  // refA变了，说还指向a
    cout << refA << endl;

    refA = 100;
    cout << a << "====" << b << endl;


    return 0;
}