#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
  char name[100]; // 100 byte
  int roll;       // 4 byte
  double gpa;     // 8 byte
};

int main() {

  // Student a;
  // a.gpa = 4.00;
  // a.roll = 23;
  // char temp[100] = "Rakib";
  // strcpy(a.name, temp);

  Student a, b;
  cin.getline(a.name, 100);
  cin >> a.roll >> a.gpa;

  cin.ignore();

  cin.getline(b.name, 100);
  cin >> b.roll >> b.gpa;

  cout << a.name << " " << a.roll << " " << a.gpa << endl;
  cout << b.name << " " << b.roll << " " << b.gpa << endl;

  return 0;
}