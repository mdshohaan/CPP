#include <iostream>
using namespace std;

int main() {

  int *arr = new int[3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  int *b = new int[5];
  // coping array form arr
  for (int i = 0; i < 3; i++) {
    b[i] = arr[i];
  }
  b[3] = 4, b[4] = 5;
  delete[] arr;

  for (int i = 0; i < 5; i++) {
    cout << b[i] << " ";
  }
  return 0;
}