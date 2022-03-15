#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

/**
 * @brief 传递的是开始，结束指针
 * 
 * @param begin 
 * @param end 
 */
void print(int* begin, int* end) {
    for (int* pt = begin; pt < end; pt++) //pt++指向下一个
    {
        cout << *pt << endl;
    }
    
    
}

int main() {
    int n = 4;
    int arr[4] = {10, 10, 20, 20}; 

    print(arr, arr + n);
    return 0;
}
