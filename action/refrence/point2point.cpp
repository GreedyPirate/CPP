#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

// 二级指针的作用：
// 首先回忆swap函数为什么要传指针才能改变实参的值？
// 同理，如果要在函数里改变指针的指向，就要传指针的指针
int x = 100;
void fun(int** p) {
    *p = &x;
}
 
int main() {
    int a = 10;
    int *p = &a;

    fun(&p);
    cout << *p << endl;

    return 0;
}