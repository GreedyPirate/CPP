#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>
 
using namespace std;
 
class KeySort {
    bool operator()(const int& a, const int& b) const {
        return a > b;
    }
};

template<typename K, typename V, typename S>
void printMap(multimap<K, V, S>& map) {
    for(auto& entry : map){
        cout << entry.first << "---" << entry.second  << endl;
    }
}


int main() {
    multimap<int, string, KeySort> map;

    map.insert(std::make_pair(10, "dog"));
    map.insert(std::make_pair(5, "cat"));
    map.insert(std::make_pair(20, "mice"));

    printMap(map);

    return 0;
}