#include <iostream>
using namespace std;

int main() {
  // CHAR

  char s[100] = "Hello";
  strcpy(s, "world");

  char s1[10] = "Hello";
  char s2[10] = "Hello";
  if (strcmp(s1, s2) == 0) {
    cout << "Same" << endl;
  }

  // STRING

  string x = "Hello";
  x = "HJFDlasdkhas";

  string x1 = "Hello";
  string x2 = "Hello";
  if (x1 == x2) {
    cout << "Same" << endl;
  }

  return 0;
}