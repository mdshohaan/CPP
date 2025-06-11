#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int freq[26] = {0};
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'e' || s[i] == 'E' || s[i] == 'g' || s[i] == 'G' ||
        s[i] == 'y' || s[i] == 'Y' || s[i] == 'p' || s[i] == 'P' ||
        s[i] == 't' || s[i] == 'T') {

      freq[s[i]]++;
    }
  }
  for (int i = 0; i < 26; i++) {
  }

  return 0;
}