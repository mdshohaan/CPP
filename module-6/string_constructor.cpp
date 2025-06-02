#include <iostream>
using namespace std;

int main() {

  // string s = "Hello";
  // 1
  string s("Hello");
  // 2
  string s("Hello", 2); // He
                        // 3
  string s = "Hello world";
  string t(s, 3);   // lo world
                    // 4
  string s(5, 'A'); // AAAAA
  cout << s << endl;
  return 0;
}