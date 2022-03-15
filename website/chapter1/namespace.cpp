#include <stdio.h>

namespace service {
    int const SIZE = 10;
    class Foo {};
    void doSomething(){}
}

namespace controller {
    int const SIZE = 20;

    void doSomething() {
        printf("foo ...");
    }
}

int main() {
    int size = service::SIZE;

    printf("size is %d\n", size);

    // 也可以用using
    using controller::SIZE;

    printf("now size is %d\n", size);

    using namespace controller;

    doSomething();
    return 0;
}