//
// Created by Administrator on 2021/9/7.
//
#include <stdio.h>

/**
 *
 * g++ 命令
 * g++ class.cpp -o 名字
 *
 * gcc 之前是专门编译c的，后来支持各种语言，变成通用工具，g++是它用来编译c++的一部分
 * gcc也可以编译c++
 **/
class UserManager{
public:
    int age;
    char const *name;

    bool isAdult() {
        return age >= 18;
    }

};


int main() {
    class UserManager user;

    user.age = 19;
    user.name = "jay";

    printf("is adult? %d", user.isAdult());

    return 0;
}