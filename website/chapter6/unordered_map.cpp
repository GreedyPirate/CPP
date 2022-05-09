#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
 
using namespace std;

template<typename K, typename V>
void printMap(unordered_map<K, V>& map) {
    for(auto& entry : map){
        cout << entry.first << "---" << entry.second  << endl;
    }
}

template<typename K, typename V>
void printMapV2(unordered_map<K, V>& map) {
    for(auto it = map.begin(); it != map.end(); it++) {
        cout << it->first << "---" << it->second  << endl;
    }

}

typedef unordered_map<string, int> SI_MAP;
 
int main() {
    unordered_map<string, int> map;

    //数组形式
    map["A"] = 1;

    // map.insert({ {"B", 2} });
    map.insert(SI_MAP::value_type("B", 2));
    map.insert(std::make_pair<string, int>("C", 3));
    map.insert(std::pair<string, int>("D", 4));

    printMapV2(map);

    cout << map["B"] << "==" << map.at("B") << endl;
    cout << map["X"] << "==" << map.at("X") << endl;

    auto x = map.find("A");
    if(x != map.end()) {

        cout << "exist: " << x->first << endl;
        cout << map.count("D") << endl;
    }
    return 0;
}