#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string s;
  while (getline(cin, s)) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
      char c = s[i];
      if (c != ' ') {
        result += c;
      }
    }
    sort(result.begin(), result.end());
    cout << result << endl;
  }
  return 0;
}