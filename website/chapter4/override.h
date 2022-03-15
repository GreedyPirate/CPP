//
// Created by Administrator on 2021/9/10.
//

#ifndef CPP_LEARNING_OVERRIDE_H
#define CPP_LEARNING_OVERRIDE_H

#include "string"

using namespace std;

class Parent {
public:
    string name;
    int age;
    Parent();
    Parent(string name);

    void say();

protected:
    string address;

private:
    double salary;

};

class Sub : public Parent {
public:
//    using Parent::salary;  private不能提升权限
    using Parent::address;
    string name;
    Sub();
    Sub(string name, int offer);
    void say();
    int getOffer();

private:
    // using: 把父类中的age降低为private权限
    using Parent::age;
    int offer;
};


#endif //CPP_LEARNING_OVERRIDE_H
