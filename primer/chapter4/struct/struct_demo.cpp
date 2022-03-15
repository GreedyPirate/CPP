#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

// 全局声明
struct user {
    string name;

    int flops[3];
};

// 声明结构体，同时定义了2个变量
struct car {
    string color;
} bmw, bentch;


int main() {
    // 初始化
    user tom = {"tom", {1,2,3}};

    cout << tom.name << endl;
    cout << tom.flops[1] << endl;

    user jerry = {"jerry", {4,5,6}};
    user kim = tom;
    tom = jerry;
    cout << tom.name << endl;
    cout << tom.flops[1] << endl;

    user users[4] = {tom, jerry, kim};
    cout << users[2].name << endl;

    // 第3个为空，单也没报错..
    cout << users[3].name << endl;

    user user_array[2] = {
        {"u1", {1,1,1}},
        {"u2", {2,2,2}}
    };
    return 0;
}