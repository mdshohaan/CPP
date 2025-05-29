#include <iostream>
using namespace std;

int *fun() {
  int *arr = new int[3];
  for (int i = 0; i < 3; i++) { // 10 11 12
    arr[i] = i + 10;
  }

  return arr;
}

int main() {

  int *arr = fun();
  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " "; // 10 11 12
  }

  return 0;
}