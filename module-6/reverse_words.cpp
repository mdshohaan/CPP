#include <iostream>
#include <sstream>
using namespace std;

int main() {

  string s;
  getline(cin, s);
  stringstream ss(s);
  string word;
  while (ss >> word) {

    cout << word << " ";
  }

  return 0;
}