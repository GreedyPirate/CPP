#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;


/**
 * @brief 加了const，不能修改数组元素
 * 
 */
void incre(/* const  */int* arr, int size) {
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = 100 + i;
    }
    
}

int main() {
    int n = 4;
    int arr[4] = {10, 10, 20, 20}; 

    incre(arr, n);
    return 0;
}