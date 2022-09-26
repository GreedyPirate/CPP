#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
 
using namespace std;
 
int main() {
    std::unordered_map<std::string, std::vector<std::string>> map1;
    std::unordered_map<std::string, std::unordered_set<std::string>> map2;

    for(int i=0; i<3; i++) {
        std::unordered_set<std::string> val_set;
        for(int j=0; j<10; j++) {
            val_set.emplace("val"+std::to_string(j));
        }
        map2.insert(std::make_pair("key"+std::to_string(i), val_set));
    }

    // for(auto& entry : map2) {
    //     cout << entry.first << endl;
    //     auto& uset = entry.second;
    //     for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
    //         cout << *iter << endl;
    //     }
    // }
    auto get_vec_fn = [](const std::pair<std::string, std::unordered_set<std::string>> pair){
        std::unordered_set<std::string> set = pair.second;
        std::vector<std::string> vec;
        vec.insert(vec.end(), set.begin(), set.end());
        return vec;
    };
    std::transform(map2.begin(), map2.end(), std::inserter(map1, map1.end()), get_vec_fn);

    return 0;
}