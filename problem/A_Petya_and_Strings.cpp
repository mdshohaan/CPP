#include <iostream>
#include <sstream>
using namespace std;

int main() {

  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i < s1.length(); ++i) {
    s1[i] = tolower(s1[i]);
  }

  for (int i = 0; i < s2.length(); ++i) {
    s2[i] = tolower(s2[i]);
  }

  int eqaulOrNot = s1.compare(s2);
  if (eqaulOrNot == 0) {
    cout << "0" << endl;
  } else if (eqaulOrNot < 0) {
    cout << "-1" << endl;
  } else {
    cout << "1" << endl;
  }

  return 0;
}