#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <regex>
 
using namespace std;

 
int main() {
    std::string f = "$F$user.rt_click_cnt";
    cout << f.rfind("$F") << endl;
    cout << f.find("$F") << endl;
    if(f.rfind("$F", 0) == 0) {
        cout << "find $F" << endl;
        std::string name = f.substr(3);
        cout << name << endl;

        if(name.find(".") != string::npos) {
            
        }
    }
    return 0;
}