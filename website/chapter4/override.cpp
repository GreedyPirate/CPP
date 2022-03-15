//
// Created by Administrator on 2021/9/10.
//

#include "override.h"
#include "string"
#include "iostream"

using namespace std;

Parent::Parent() {
    cout<<"default parent"<<endl;
}

Parent::Parent(string name) : name(name) {}


// 不写调用了父类哪个构造方法，默认调用父类无参构造，和java一样
Sub::Sub() {
    cout<<"init sub"<<endl;
}

Sub::Sub(string name, int offer): Parent(name), offer(11){}

void Parent::say() {
    cout<<"hi, I'm " + this->name<<endl;
}

void Sub::say() {
    cout<<"hi there, my name is " + this->name<<endl;
}

int Sub::getOffer() {
    return this->offer;
}

int main() {
    Sub* sub = new Sub("jay", 10);
    sub->say();

    // 服务
    sub->Parent::say();

    cout<<sub->address<<endl;

    cout<<sub->getOffer()<<endl;

    Sub* def = new Sub();
    return 0;
}