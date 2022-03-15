#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
 
using namespace std;
 
int main() {
    string log = "xmdt log is";
    // 兼任char[]的用法
    cout << log[2] << "len is " << log.length() << ", size is " << log.size() << endl;

    log = "new test log ";
    // string的长度是可变的，char[] 似乎不行
    cout << "now len is " << log.length() << endl;

    // append
    log += "is error";
    cout << log << " len is " << log.length() << endl;

    string c_style = {"c style string"};
    return 0;
}