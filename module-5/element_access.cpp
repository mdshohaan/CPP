#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;
  cout << s[0] << endl;
  cout << s.at(0) << endl; // same

  cout << s.front() << endl;
  cout << s.back() << endl;        // last index
  cout << s[s.size() - 1] << endl; // last index  (length-1)
  return 0;
}