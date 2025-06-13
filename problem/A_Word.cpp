#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int small = 0;
  int big = 0;

  for (char c : s) {
    if (isupper(c)) {
      big++;
    } else if (islower(c)) {
      small++;
    }
  }

  if (big > small) {
    for (int i = 0; i < s.size(); i++) {
      cout << (char)toupper(s[i]);
    }
  } else {
    for (int i = 0; i < s.size(); i++) {
      cout << (char)tolower(s[i]);
    }
  }

  return 0;
}