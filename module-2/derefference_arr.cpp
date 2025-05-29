#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 2, 3};
  // cout << &arr[0] << endl; // 0x16d84ab78
  // cout << arr << endl;     // 0x16d84ab78
  // array itself a pointer
  *(arr + 0) = 100;
  *(arr + 1) = 200;
  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " "; // 100 200 3
  }

  return 0;
}