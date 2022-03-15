#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{

    char str[] = "HELLO";
    cout << str << endl;

    char concat_str[] = "ni" "hao";
    cout << concat_str << endl;

    int len = strlen(concat_str);
    int bytes = sizeof(concat_str);
    cout << "len is " << len << ", and size is " << bytes << endl;
    return 0;
}