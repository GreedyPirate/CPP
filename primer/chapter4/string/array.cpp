#include <stdio.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    short sarr[10];
    int iarr[3] = {1, 2, 3};

    int c11_arr[3]  {1, 2, 3};

    // 可以部分初始化，其他是默认值
    long larr[5] = {1L};

    // 长度可以不写，自动推断
    float farr[] = {1.2, 3.6, 3.14};
    return 0;
}