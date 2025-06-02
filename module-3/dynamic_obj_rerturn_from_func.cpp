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

// return dynamic obj from function
Student *fun() {
  Student *Rahim = new Student(45, 4, 4.5);
  return Rahim;
}

int main() {
  Student *p = fun();
  cout << p->roll << " " << p->cls << " " << p->gpa;
  return 0;
}
/*
 *Why we need dynamic obj?
 *bcz static obj can not return from function
 */
