#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    int n = 10;
    const int* p = &n;

    n = 20;
    // *p = 20; // const指针不行，n可以

    int a = 0;
    p = &a; //只是不能修改值，但可以改变指向


    int* const up = &n;
    *up = 20;
    // up = &a;


    const int x = 50;
    // int* px = &x; // 反过来不行，const变量不能定义非const指针 

    return 0;
}