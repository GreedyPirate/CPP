#include "stdio.h"

int main() {

    int* i = new int;

    double* d = new double[10];

    delete i;
    delete d;

    return 0;
}