#include <iostream>
using namespace std;

void count(int t) {
  for (int i = 0; i < t; i++) {

    int n;
    cin >> n;
    char c;
    cin >> c;

    for (int i = 0; i < n; i++) {
      cout << c << " ";
    }
    cout << endl;
  }
}

int main() {

  int n;
  cin >> n;
  count(n);

  return 0;
}