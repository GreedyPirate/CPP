#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    string str = u8"utf-8 text";
    cout << str << endl;

    // 防转义
    string raw = R"(\n\t""""""")";
    cout << raw << endl;
    return 0;
}