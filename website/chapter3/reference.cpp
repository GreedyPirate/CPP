//
// Created by Administrator on 2021/9/9.
//

#include "iostream"

using namespace std;

int main() {
    int a = 0;
    int &refer = a;
    int* p = &a;

    a = 1;
    cout<<a<<endl;
    refer = 2;
    cout<<a<<endl;
    *p = 3;
    cout<<a<<endl;

    return 0;
}