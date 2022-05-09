#include <stdio.h>
#include <memory>
#include <iostream>
#include <string>


using namespace std;

struct user {
    int age;
    user(int age):age(age){}
};

class student {
public:
    student(int age):age(age) {}
    int age;    
};

int main() {
    // make_unique c++14
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    cout <<  *ptr << endl;
    cout <<  ptr.get() << endl;


    std::unique_ptr<int> nptr(new int(1000));
    cout << *nptr << endl;
    nptr.release();
    cout << "after release: " << *nptr << endl;


    // 指向类和结构体
    std::unique_ptr<user> sptr(new user(110));
    cout << sptr->age << endl;

    
    std::unique_ptr<student> cptr(new student(150));
    cout << cptr->age << endl;


    // optr = cptr; // unique_ptr不能直接转移
    auto optr = std::move(cptr);
    if(!cptr) { // 重载了bool运算符，相当于cptr.get() == nullptr
        cout << "optr " << optr->age << endl;
    } else {
        cout << "cptr " << cptr->age << endl;
    }

    return 0;
}