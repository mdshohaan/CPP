// #include <iostream>
// using namespace std;

// void mult(int n) {

//   for (int i = 1; i <= 10; ++i) {
//     cout << n << " * " << i << " = " << n * i << endl;
//   }
// }

// int main() {

//   int n = 5;
//   mult(n);
//   return 0;
// }

#include <iostream>
using namespace std;

void mult(int n, int i = 1) {
  if (i == 11)
    return;
  cout << n << " * " << i << " = " << n * i << endl;
  i++;
  mult(n, i);
}

int main() {

  int n = 5;
  mult(n);
  return 0;
}