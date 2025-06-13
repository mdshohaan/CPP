#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  int max_step = 5;
  int steps = t / max_step;
  if (t % max_step != 0) {
    steps++;
  }
  cout << steps;

  return 0;
}