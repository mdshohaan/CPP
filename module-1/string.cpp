#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  cin.ignore();
  char c[100];
  //  cin >> c;
  cin.getline(c, 100);
  cout << x << endl << c << endl;

  string s;
  cin >> s;
  cout << s << endl;

  return 0;
}
/*
4
hello world
*/