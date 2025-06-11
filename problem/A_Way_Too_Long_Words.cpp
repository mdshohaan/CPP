#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;

    if (s.size() > 10) {
      int cnt = 0;
      for (int i = 1; i < s.size() - 1; i++) {
        cnt++;
      }
      char f = s[0];
      char l = s[s.size() - 1];
      cout << f << cnt << l << endl;
    } else {
      cout << s << endl;
    }
  }

  return 0;
}