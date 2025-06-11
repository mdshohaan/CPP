#include <cstring>
#include <iostream>

using namespace std;

int main() {

  char s[10000];
  cin >> s; // aaabbc

  int freq[26] = {0};
  for (int i = 0; i < strlen(s); i++) {
    // printf("%d ", s[i]); // 97 97 97 98 98 99(charc to number convrt)
    int index = s[i] - 'a'; // s[i] -'a';
                            // printf("%d ", index); // 0 0 0 1 1 2
    freq[index]++;
  }
  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      cout << (char)(i + 97) << " " << freq[i]
           << endl; // i+97 = num to char convrt
    }
  }

  return 0;
}