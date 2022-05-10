#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include "common/stl_utils.h"
 
using namespace std;
 
int main() {
    vector<int> vec(5, 1);

    // 重新fill
    vec.assign(10, 3);
    printVec(vec);

    // 元素清零，capacity不变
    vec.clear();
    printVec(vec);

    for (size_t i = 0; i < 10; i++)
        vec.push_back(i);

    cout << vec.at(2) << " " << vec[2] << endl;
    try {
        cout << vec.at(10) << endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    // 随机数
    cout << vec[10] << endl;
    
    // 拿到vector底层数组的指针
    int* ptr = vec.data();
    if(ptr) {
        for (size_t i = 0; i < 10; i++) {
            cout << *(ptr+i) << endl;
        }
        
    }
   
    vector<int> bigVec;
    // 提前初始化数组大小，避免频繁扩容
    bigVec.reserve(10000);
    for (size_t i = 0; i < 10000; i++)
    {
        bigVec.push_back(i);
        if(i%1000 == 0)
            cout << bigVec.capacity() << endl;
    }
    

    return 0;
}