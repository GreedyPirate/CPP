#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

void print_two_dim(int arr[][3], int size) {
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }
               
    }
    
}

void print_use_point(int (*arr)[3], int size) {
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }
               
    }
    
}


int main() {
    int a[2][3] = {
        {1, 2, 3},
        {4,5,6}
    };

    print_two_dim(a, 2);

    printf("\n-----------------------------------------------\n");
    print_use_point(a, 2);
    return 0;
}