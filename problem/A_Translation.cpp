#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;
  string t;
  cin >> t;

  reverse(s.begin(), s.end());
  if (s == t) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}