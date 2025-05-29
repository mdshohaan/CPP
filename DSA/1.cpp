#include <iostream>
using namespace std;
bool isEven(int n) {
  if ((n & 1) == 0) {
    return true;
  } else
    return false;
}

int main() {

  int n;
  cin >> n;
  if (isEven(n) == true)
    cout << "true";
  else
    cout << "false";
  return 0;
}
/*
✅ n = 6 → Binary = 0110
  0110   (n)
& 0001   (1)
= 0000   → result = 0 → EVEN

❌ n = 7 → Binary = 0111
  0111   (n)
& 0001   (1)
= 0001   → result = 1 → ODD

✅ তাই (n & 1) শুধু শেষ বিটটা বের করে:
        •	যদি ফল 0 হয় → n is even
        •	যদি ফল 1 হয় → n is odd

        if (n % 2 == 0)  // slower but readable
        if ((n & 1) == 0)  // faster and clever
*/