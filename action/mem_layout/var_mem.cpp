#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

int g_var;
 
int main() {
    /**
     * 栈区
     * 0x61fec4
     * 0x61fec0
     * 0x61febc
     * 
     * 内存地址降序，先进后出
     */
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    cout << &a1 << "\n" << &a2 << "\n" << &a3 << "\n" << endl;

    /**
     * 堆区
     */
    int* b1 = new int(1);
    int* b2 = new int(2);
    cout << b1 << "\n" << b2 << "\n" <<endl;

    /**
     * 全局/静态存储区
     */
    static int s1 = 1; 
    static int s2 = 1;
    static int s3 = 1;
    g_var = 1;
    cout << &s1 << "\n" << &s2 << "\n" << &s3 << "\n" << &g_var << "\n" << endl;


    /**
     * 常量池
     */
    string str = "abc";
    cout << &str << endl;
    return 0;
}