#include <iostream>
#include <algorithm>

using namespace std;

void print(int i);

int main() {

    int n = 10;

    for(int i = 0; i < n; i++) {
       print(i);
    }

    int  i = 10, j = 20;
    // algorithm提供swap函数
    swap(i, j);
    cout<<i<<","<<j<<endl;
    return 1;
}

/**
 * 一种优化技术，调用的时候直接拷贝代码，而不是压栈
 * 编译器有自己的判断能力，它会根据具体情况决定是否这样做。
 **/
inline void print(int i) {
    cout<<i<<endl;
}

// 默认参数
void defaultParam(int n, float b=2.9, char c='@'){
    cout<<n<<", "<<b<<", "<<c<<endl;
}