#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
struct car {
    string color;
};

/**
 * @brief 2种访问结构体变量的方法
 * 指针用->
 * 对象用.
 * 
 * @return int 
 */
int main() {
    car* bmw = new car;
    bmw->color = "black";

    cout << (*bmw).color << endl;

    delete bmw;
    return 0;
}