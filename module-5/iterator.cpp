#include <iostream>
using namespace std;

int main() {

  string s = "Hello";

  //* using loop

  // for (int i = 0; i < s.size(); i++) {
  //   cout << s[i] << endl;
  // }

  // cout << *s.begin();     // H
  // cout << *(s.end() - 1); // o

  //* using iterator

  // for (string::iterator it = s.begin(); it < s.end(); it++) {
  //   cout << *it << endl;
  // }

  for (auto it = s.begin(); it < s.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}