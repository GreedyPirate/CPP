#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    // int* p; // 野指针，没有初始化直接赋值了

    int* p = new int;
    *p = 100;
    cout << *p << endl;

    delete p;
    // delete p; 只能delete一次

    int cnt = 10;
    int* cp = &cnt;
    // delete cp; delete必须对应一个new

    int* p_arr = new int[10];
    p_arr[0] = 111;
    p_arr[1] = 222;
    cout << *p_arr << endl; // p_arr指向数组第一个元素
    cout << *(p_arr+1) << endl; // p_arr指向下一个元素

    int i[5] = {1,2,3,4,5};
    cout << sizeof(i) << endl; // 数组整个数组占用字节数
    cout << sizeof(p_arr) << endl; // 输出指针字节数

    delete [] p_arr; // 释放数组
    return 0;
}