#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

string SanitizeThreadSuffix(string suffix) {
  string clean;
  for (int i = 0; i < suffix.size(); ++i) {
    const char ch = suffix[i];
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9') || ch == '_' || ch == '-') {
      clean += ch;
    } else {
      clean += '_';
    }
  }
  return clean;
}

int main() {
    cout << SanitizeThreadSuffix("task#thread+pool") << endl;
    return 0;
}