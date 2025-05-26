#include <iostream>
using namespace std;
int *p;
int *fun() {
  int *x = new int;
  *x = 10;
  p = x; // two are pointer
  cout << "Fun---" << *p << endl;
  return p;
}

int main() {

  fun();
  cout << "Main---" << *p << endl;
  return 0;
}
/*
Fun---10
Main-- 10
*/