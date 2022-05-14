#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include "action/protobuf/idl/person.pb.h"
#include "action/protobuf/idl/dimensions.pb.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/text_format.h"
 
using namespace std;
 
int main() {
    Person p;
    p.set_name("tom");
    p.set_id(10);
    p.set_email("xxx");

    std::string pb_str;
    p.SerializeToString(&pb_str);
    cout << pb_str << endl;

    DimensionValues dv;
    return 0;
}