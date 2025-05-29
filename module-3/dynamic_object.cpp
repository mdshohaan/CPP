#include <iostream>
using namespace std;

class Student {
public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int cls, double gpa) {

    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  }
};

int main() {

  Student Rahim(45, 4, 4.55);               // static obj
  Student *Karim = new Student(23, 7, 2.3); // dynamic obj
  cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa;
  cout << Karim->roll << " " << Karim->cls << " " << Karim->gpa;
  return 0;
}