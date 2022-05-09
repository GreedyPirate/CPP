#include <stdio.h>
#include <iostream>
#include <vector>
#include <memory>
 
using namespace std;
 
int main() {
    std::shared_ptr<int> sp;
    sp.reset(new int(10)); // reset初始化

    cout << *sp.get() << endl;

    if(sp.unique()) {
        cout << "only one ref: " << sp.use_count() << endl;
    }

    

    return 0;
}
