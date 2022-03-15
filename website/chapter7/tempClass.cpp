#include <stdio.h>
#include <iostream>

using namespace std;


// 模板类=泛型类?

template<typename T> class Number {
public:
    Number(T t);

    T getNumber();
private:
    T t;    
};

template<typename T> Number<T>::Number(T t) {
    this->t = t;
}


template<typename T> T Number<T>::getNumber() {
    return this->t;
}

int main() {
    Number<int>* val = new Number<int>(1);
    
    cout<<val->getNumber()<<endl;
    return 0;
}



