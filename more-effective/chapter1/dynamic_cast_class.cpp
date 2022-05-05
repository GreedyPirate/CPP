#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
class Base {
public:
    Base() = default;
    ~Base() = default;
    virtual void hi() {
        
    }
};

class Derive1: public Base {
public:
    Derive1() = default;
    ~Derive1() = default; 
    void hi() {
        cout << "hi, d1" << endl;
    }
};

class Derive2: public Base {
public:
    Derive2() = default;
    ~Derive2() = default;
        void hi() {
        cout << "hi, d2" << endl;
    }
};

int main() {
    
    // 指针
    Derive1 d1;

    Base* obj = &d1;
    obj->hi();

    Derive1* pd1 = dynamic_cast<Derive1*>(obj);
    if(pd1) {
        cout << "pointer down cast success" << endl;
        pd1->hi();
    }

    // 引用
    Derive2 d2;
    Base& ref = d2;

    try {
        Derive2& refD2 = dynamic_cast<Derive2&>(ref);
        refD2.hi();
    } catch(std::bad_cast& e) {
        cout << e.what() << endl;
    }

    try {
        Derive1& refD1 = dynamic_cast<Derive1&>(ref);
        refD1.hi();
    } catch(std::bad_cast& e) {
        cout << "ref down cast error " << e.what() << endl;
    }
    

    // Base* pb = &obj;

    // Derive1* p1 = &d1;

    // Derive1* p2 = dynamic_cast<Derive1*>(pb);

    // if(p2) {
    //     cout << "cast success" << endl;
    // }

    return 0;
}