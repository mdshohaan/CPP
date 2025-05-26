#include <iostream>
using namespace std;
int main() {

  int day; // 2
  cin >> day;

  switch (day) {
  case 1:
    cout << "Saturday\n";
    break;
  case 2:
    cout << "Sunday\n";
    break;
  case 3:
    cout << "Monday\n";
    break;
  default:
    cout << "Wrong\n";
  }

  return 0;
}