#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int *a = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  int *b = new int[m];
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
  for (int i = n; i < m; i++) {
    cin >> b[i];
  }

  delete[] a;
  for (int i = 0; i < m; i++) {
    cout << b[i] << " ";
  }

  return 0;
}
/*
5
1 2 3 4 5
10
6 7 8 9 10
output
1 2 3 4 5 6 7 8 9 10

*/