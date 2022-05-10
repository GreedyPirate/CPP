#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "common/stl_utils.h"
 
using namespace std;

int main() {
    vector<int> vec;

    // capacity按2的指数扩容
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
        cout << "max size: " << vec.max_size() << ", size: " << vec.size() << ", cap: " << vec.capacity() << endl;
    }

    printVec(vec);
    
    // 数组初始化，传入开始，结束指针
    int arr[] = {1,2,3,4,5};
    vector<int> ints(arr, arr+5);
    printVec(ints);

    // 填充
    vector<int> fill(10, 6);
    printVec(fill);
    
    // 拷贝
    vector<int> copy(fill); // vector<int> copy = fill;
   
    printVec(copy);
    bool equals = &fill == &copy;
    cout << &fill << "==" << &copy << " " << boolalpha << equals << endl;
    return 0;
}