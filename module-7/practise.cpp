#include <iostream>
#include <sstream>

using namespace std;

int main() {

  string s1;
  getline(cin, s1);
  string s2;
  cin >> s2;

  stringstream ss(s1);
  string word;
  int cnt = 0;
  while (ss >> word) {
    if (word == s2) {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}