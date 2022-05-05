#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

struct user {
    int age;
    string name;
};

/**
 * @brief 值传递，发生对象拷贝
 * 
 * @param u 
 */
void valueTrans(user u) {
    cout << u.name << "=====" << u.age << endl;
}

/**
 * @brief 指针传递，不拷贝对象
 * 
 * @param u 
 */
void pointTrans(user* u) {
    if(u) {
        cout << u->name << "-----" << u->age << endl;
    }
    
}

/**
 * @brief 引用传递，引用是对象的别名，不需要*p操作
 *  而且是先有对象，后有别名，所以不用判空
 * 
 * @param u 
 */
void referTrans(user& u) {
    
    cout << u.name << "......." << u.age << endl;
}

int main() {
    user u1 = {10, "jay"};
    valueTrans(u1);

    pointTrans(&u1);
    referTrans(u1);

    user u2 = {20, "tom"};
    user& u = u1;
    // &u = u2; // 引用只能是一个对象的别名，不能再次改变
    return 0;
}