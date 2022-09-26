#include <stdio.h>
#include <iostream>
#include <memory.h>
#include <vector>
#include <string>
#include <dirent.h>
 
using namespace std;
 
int main() {

    std::string rootPath = "/Users/yangjie/PycharmProjects/playground/resources";
    Dir* dir = opendir(rootPath);

    struct dirent *entry = readdir(dir);
    if(entry->d_type == DT_DIR) {
        cout << rootPath + "/" + entry->d_name << endl;
    }
    return 0;
}