#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string s1("Hello man is the");
  string s2(" World and bd");

  for (auto i : s2) {
    s1 += i;
  }
  cout << s1;
  return 0;
}