#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "inline_func.h"
 
using namespace std;
 
int main() {
    int N = 100000;
    int arr[N];
    for (size_t i = 0; i < N; i++)
    {
        arr[i] = inline_cacl(i);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}