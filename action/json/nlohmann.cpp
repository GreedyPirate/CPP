#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <common/json.hpp>

using namespace nlohmann; 
using namespace std;

void encode() {
    json j;
    j["os"] = "ios";
    j["version"] = 14.1;
    cout << j.at("os") << endl;

    vector<std::string> appnames;
    appnames.push_back("tiktok");
    appnames.push_back("whatsapp");

    json apps = json::array();
    for(auto it = appnames.begin(); it < appnames.end(); it++) {
        json app;
        app["name"] = *it;

        apps.push_back(app);
    }

    j["apps"] = apps;

    json basic = json{{"name", "iphone"}, {"color", "black"}, {"gen", 7}};
    j["basic"] = basic;

    std::string jsonstring = j.dump(3);
    cout << jsonstring << endl;


}
 
void decode() {
    std::string text = R"(
        {
            "happy": true,
            "pi": 3.141,
            "child": [
                {
                    "name": "tom",
                    "age": 10
                },
                                {
                    "name": "kim",
                    "age": 12
                }
            ]
        }
    )"_json;

    try {
        json j = json::parse(text);
        cout << j << endl;
    } catch (json::parse_error& e) {
        cout << "parse json fatal error : " << e.what() << endl;
    }
    
}

int main() {
    encode();
    decode();
    return 0;
}