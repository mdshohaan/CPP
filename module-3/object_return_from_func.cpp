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

Student fun() {
  Student Rahim(45, 4, 4.55);
  return Rahim;
}

int main() {
  Student obj = fun();
  cout << obj.roll << " " << obj.cls << " " << obj.gpa;
  return 0;
}