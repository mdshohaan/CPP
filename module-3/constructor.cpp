#include <iostream>
using namespace std;

class Student {
public:
  int roll;
  int cls;
  double gpa;
  // when User input the not use constructor
  // Student(int r, int c, double g) {
  //   roll = r;
  //   cls = c;
  //   gpa = g;
  // }
};

int main() {
  Student Rahim;

  cin >> Rahim.roll >> Rahim.cls >> Rahim.gpa;
  //  User input
  //  int r, c;
  //  double g;
  //  cin >> r >> c >> g;
  //  Student Rahim(r, c, g);

  // Student Rahim(45, 4, 4.55);
  cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa;
  return 0;
}