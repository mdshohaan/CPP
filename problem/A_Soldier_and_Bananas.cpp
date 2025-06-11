#include <iostream>
using namespace std;

int main() {

  int k, n, w;
  cin >> k >> n >> w;
  int sum = 0;

  for (int i = 1; i <= w; i++) {
    int res = k * i;
    sum += res;
  }
  int borrow = sum - n;
  if (borrow <= 0) {
    cout << "0" << endl;
  } else {
    cout << borrow << endl;
  };

  return 0;
}