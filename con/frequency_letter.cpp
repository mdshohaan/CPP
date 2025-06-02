#include <stdio.h>
#include <string.h>

int main() {
  char s[10000001];
  scanf("%s", s); // aaabbc

  int freq[26] = {0};
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    // printf("%d ", s[i]); // 97 97 97 98 98 99(charc to number convrt)
    int idx = s[i] - 97; // s[i] -'a';
    // printf("%d ", idx); // 0 0 0 1 1 2
    freq[idx]++;
  }
  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      printf("%c : %d\n", i + 97, freq[i]); // i+97 = number to chact convrt
    }
  }

  return 0;
}