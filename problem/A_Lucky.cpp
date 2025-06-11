#include <iostream>
#include <sstream>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;

    // First 3 digits
    for (int i = 0; i < 3; i++) {
      sum1 += s[i] - '0'; // Convert char to int
    }

    // Last 3 digits
    for (int i = 3; i < 6; i++) {
      sum2 += s[i] - '0';
    }

    if (sum1 == sum2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}