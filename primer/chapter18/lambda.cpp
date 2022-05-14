#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "common/stl_utils.h"
 
using namespace std;

bool is_even(int i) {
    return i % 2 == 0;
}
 
int main() {
    vector<int> vec(10);

    std::generate(vec.begin(), vec.end(), std::rand);
    printVec(vec);

    int even_num = std::count_if(vec.begin(), vec.end(), is_even);
    cout << even_num << endl;
    
    return 0;
}