#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

// 变量有多个类型的时候可以用，比如特征 
union mix_type {
    int i_val;
    double d_val;
    float f_val;
    long l_val;
} feat1, feat2;


struct none_name {
    // 匿名的union
    union {
        double d_val;
        float f_val;
    } feature_type;
} var1;

int main() {
    feat1.i_val = 1;
    feat2.l_val = 1000L;
    
    cout << feat1.i_val << endl;
    cout << feat2.l_val << endl;

    feat1.d_val = 1.0;
    feat2.f_val = 3.14f;
    
    // 每次只保存一个变量，其它的是默认值
    cout << feat1.i_val << endl;
    cout << feat2.l_val << endl;

    var1.feature_type.d_val = 1.9;

    return 0;
}