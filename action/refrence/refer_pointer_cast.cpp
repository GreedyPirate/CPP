#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void fun(int& n) {
    cout << n << endl;
}

void funp(int* n) {
    cout << *n << endl;
}

int main() {
    int a = 10;
    int& n = a;
    fun(n);

    // 指针转引用，要用*传原始对象
    int* p = &a;
    fun(*p);

    // 引用转指针，其实就是取地址
    funp(&n);


    return 0;
}