#include <iostream>
#include <sstream>
using namespace std;

int main() {

  string s;
  cin >> s;
  while (1) {
    int index = s.find("EGYPT");
    if (index != string::npos) {
      s.erase(index, 5);
      s.insert(index, " ");
    } else {
      break;
    }
  }
  cout << s << endl;

  return 0;
}