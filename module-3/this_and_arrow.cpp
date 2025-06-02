#include <iostream>
using namespace std;

class Student {
public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int cls, double gpa) {
    // (*this).roll =roll;
    // (*this).cls =cls;
    // (*this).gpa =gpa;
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

int main() {

  Student Rahim(45, 4, 4.55);
  // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa;
  return 0;
}