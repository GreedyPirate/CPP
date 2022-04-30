#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 


int main() {
    int x  = 10;

    int &rx = x;

    int y = 20;

    rx = y;

    cout << rx << endl;

    rx = 30;

    cout << x << "---" << y << "---" << rx << endl;
    return 0;
}