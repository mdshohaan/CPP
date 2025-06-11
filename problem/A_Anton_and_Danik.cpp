#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  string s;
  cin >> s;
  int A = 0, D = 0;
  for (int i = 0; i < t; i++) {
    if (s[i] == 'A') {
      A++;
    } else {
      D++;
    }
  }
  if (A > D) {
    cout << "Anton" << endl;
  } else if (A == D) {
    cout << "Friendship" << endl;
  } else {
    cout << "Danik" << endl;
  }

  return 0;
}