#include <iostream>
using namespace std;
int findSum(int n) {
  if (n == 1) {
    return 1;
  }
  int mul = findSum(n - 1);
  return n * mul;
}

int main() {

  int n = 3;
  cout << findSum(n);
  return 0;
}