#include <iostream>
using namespace std;

int main() {

  int x = 10;

  int *p = new int;
  *p = 20;
  cout << *p << endl;
  return 0;
}