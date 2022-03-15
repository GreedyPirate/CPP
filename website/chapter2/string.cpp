//
// Created by Administrator on 2021/4/11.
//

#include "string"
#include "iostream"

using namespace std;

int main() {
    string text = "dave, have a nice day";
    text.append("!");

    int length = text.length();
    cout<<"length is " + length<< endl;

    char c = text.at(0);
    int index = text.find("nice");
    int rfind = text.rfind("nice", text.length()); //最多查找到第二个参数处
    int firstIndex = text.find_first_of("ave", 3);
    if(firstIndex > text.length() || index > text.length() || rfind > text.length()) {
        cout<<"search failed"<<endl;
    }else {
        cout<<index<<rfind<<firstIndex<<endl;
    }

    text.insert(3, "ok");
    cout<<"insert and erase " + text<<endl;
    text.erase(1,4);
    cout<<"insert and erase " + text<<endl;

    string substring = text.substr(2, 5);
    cout<<"substring is " + substring<<endl;

    string path = "D:\\demo.txt";
    const char* cStr = path.c_str();
    cout<<cStr<<endl;



    return 1;
}