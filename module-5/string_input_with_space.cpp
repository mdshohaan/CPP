#include <iostream>
using namespace std;

int main() {

  string s;
  // cin.getline(s,100); // char s[100]

  // without space input
  // cin >> s; // hello

  // with space input
  // when we use two input then use cin.ignore().bcz of getline input the sapces
  getline(cin, s);
  cout << s;
  return 0;
}