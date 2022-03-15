#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
// int sum(int arr[], int size){
//     int total = 0; // 必须初始化
//     for (size_t i = 0; i < size; i++)
//     {
//             total += arr[i];
//     }
//     return total;
// }


int sum(int* arr, int size){
    int total = 0;
    for (size_t i = 0; i < size; i++)
    {
        // 指针访问数组元素
        cout << "arr no." << i << " is: " << *(arr+i)  << endl;
        total += arr[i];
            
    }
    return total;
}

int main() {

    int n = 4;
    int arr[4] = {10, 10, 20, 20}; 

    int total = sum(arr, n);
    cout << total << endl;
    return 0;
}