#include <iostream>
using namespace std;
class Student {
public:
  int roll;
  int cls;
  double gpa;

  Student(int r, int c, int g) {
    roll = r;
    cls = c;
    gpa = g;
  }
};

int main() {

  // Student Rahim;
  // Rahim.roll = 2;
  // Rahim.cls = 6;
  // Rahim.gpa = 2.4;

  // Student Karim;
  // Karim.roll = 3;
  // Karim.cls = 7;
  // Karim.gpa = 4.20;

  // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
  // cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;

  /*
   * in Above when we create  new student then this code again repetition thats
   * why, we use constructor function
   */
  // more clearner
  Student Rahim(2, 6, 2.4);
  Student Karim(3, 7, 4.2);

  // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
  // cout << Karim.roll << " " << Karim.cls << " " << Karim.gpa << endl;

  /*
   *From user input dont use constrcutor function
   */
  Student Rahim;
  cin >> Rahim.roll >> Rahim.cls >> Rahim.gpa; // directly input from user

  // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;

  return 0;
}