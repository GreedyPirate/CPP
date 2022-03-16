#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
class Base {
public:
    Base();
    ~Base();
};

class Derive1: public Base {
    Derive1();
    ~Derive1();
};

class Derive2: public Base {
    Derive2();
    ~Derive2();
};

int main() {
    Base* b = new Base();
    return 0;
}