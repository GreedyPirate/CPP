#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    std::vector<int32_t> src;

    for (int32_t i = 0; i < 10; i++) {
        src.push_back(i);
    }
    for (size_t i = 0; i < 10; i++) {
        cout << src.at(i) << endl;
    }
    std::vector<int32_t> dest;

    std::transform(std::begin(src), std::end(src), std::back_inserter(dest), [](int32_t x) { 
        return x * 10;
    });

    for (size_t i = 0; i < 10; i++) {
        cout << dest.at(i) << endl;
    }
    return 0;
}