#include <iostream>
#include <string>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    string s, x;
    cin >> s >> x;
    while (1) {
      int index = s.find(x);
      if (index != -1) {
        s.erase(index, x.size());
        s.insert(index, "#");
      } else {
        break;
      }
    }
    cout << s << endl;
  }

  return 0;
}