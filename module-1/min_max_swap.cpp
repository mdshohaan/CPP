#include <algorithm>
#include <iostream>
using namespace std;
int main() {

  int a, b;
  cin >> a >> b;
  // if (a > b)
  //   cout << a << endl;
  // else
  //   cout << b << endl;

  //  cout << min({3, 56, 78, 1, 500, 200}) << endl; // to many number
  //  cout << min(a, b) << endl;                     // min
  // cout << max(a, b) << endl;                     // max

  // swap value
  //  int temp = a;
  //  a = b;
  //  b = temp;
  swap(a, b);
  cout << a << " " << b << endl;

  return 0;
}