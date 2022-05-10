#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
void printVec(vector<T>& vec) {
    cout << "max size: " << vec.max_size() << ", size: " << vec.size() << ", cap: " << vec.capacity() << endl;

    if(vec.size() == 0) {
        cout << "size 0, capacity is " << vec.capacity() << endl;
        return;
    }
       
        
    if(vec.capacity() ==0) {
        cout << "capacity 0, size is " << vec.size() << endl;
        return;
    }
    
    for(auto it = vec.begin(); it < vec.end(); it++) {
        cout << *it << endl;
    }
    cout << "\n" << endl;
}