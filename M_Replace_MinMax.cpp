#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int min = INT_MAX, max = INT_MIN;
  int min_idx = -1, max_idx = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      min_idx = i;
    }
    if (arr[i] > max) {
      max = arr[i];
      max_idx = i;
    }
  }
  swap(arr[min_idx], arr[max_idx]);
  // int temp = arr[min_idx];
  // arr[min_idx] = arr[max_idx];
  // arr[max_idx] = temp;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}