#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
  int freq[7] = {0};

  for (int i = 0; i < n; i++) {
    // int val =arr[i];
    // freq[val]++;
    freq[arr[i]]++;

    // if (arr[i] == 0) {
    //   // cnt0++
    //   freq[0]++;
    // } else if (arr[i] == 1) {
    //   // cnt1++
    //   freq[1]++;
    // } else if (arr[i] == 2) {
    //   // cnt2++
    //   freq[2]++;
    // } else if (arr[i] == 3) {
    //   // cnt3++
    //   freq[3]++;
    // }
  }
  // cout << freq[0] << " " << freq[1] << " " << freq[2] << " " << freq[3];
  for (int i = 0; i < n; i++) {
    cout << freq[i] << " ";
  }

  return 0;
}