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

Student *fun() {
  Student *Rahim = new Student(45, 4, 4.5);
  return Rahim;
}

int main() {
  Student *p = fun();
  cout << p->roll << " " << p->cls << " " << p->gpa;
  return 0;
}