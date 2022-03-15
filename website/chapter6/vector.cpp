//
// Created by Administrator on 2021/9/12.
//
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec);

int main(){
    vector<int> vec;
    cout<<vec.size()<<endl;

    for (int i = 0; i < 10; ++i) {
        vec.push_back(i * 10);
    }

    for(vector<int>::iterator iter = vec.begin(); iter != vec.end();) {
        if(*iter > 60) {
            vec.erase(iter);
        }
        iter++;
    }

    printVector(vec);
    return 0;
}

void printVector(vector<int> vec){
    for (int i = 0; i < vec.size(); ++i) {
        cout<<vec.at(i)<<endl;
    }
}

