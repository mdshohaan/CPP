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
  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  int freq = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == min) {
      freq++;
    }
  }
  if (freq % 2 == 0) {
    cout << "Unlucky" << endl;
  } else {
    cout << "Lucky" << endl;
  }

  return 0;
}