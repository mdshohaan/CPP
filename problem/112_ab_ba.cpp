#include <cmath>
#include <iostream>
using namespace std;

int main() {

  long long int a, b;
  cin >> a >> b;
  long long int res = pow(a, b);
  long long int res2 = pow(b, a);
  cout << res - res2 << endl;

  return 0;
}