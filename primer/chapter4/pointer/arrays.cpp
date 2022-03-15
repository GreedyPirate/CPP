#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
 
using namespace std;

/**
 * @brief 三种数组存储方式
 * array<int, 2>和传统数组是一样的
 * 
 * @return int 
 */
int main() {
    int a[3] = {1, 2, 3};
    array<int, 2> b = {10, 20};
    vector<int> c(3);
    c.at(0) = -1;
    // c.at(10) = -2; at会做out_of_range检查
 
    return 0;
}