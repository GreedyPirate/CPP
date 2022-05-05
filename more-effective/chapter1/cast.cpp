#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

struct user {
    int age;
};

void param_cast(user& u) {
    cout << u.age << endl;
}
 
int main() {
    double pie = 3.14;

    // 类似与强转
    int i = static_cast<int>(pie);


    const int& refer = i;
    const int* p = &i;
    
    // 去除指针和引用的const属性，还可以去除volatile
    int& x = const_cast<int&>(refer);
    int* y = const_cast<int*>(p);

    // const_cast应用
    const user u = {10};
    param_cast(const_cast<user&>(u)); // 去除const
    return 0;
}