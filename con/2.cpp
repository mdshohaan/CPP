#include <iostream>
using namespace std;
class Student {
public:
  string name;
  int roll;
  char section;
  int math_marks;
  int cls;
};

int main() {
  int n;
  cin >> n;
  Student topper;
  for (int i = 1; i <= n; i++) { // test case
    Student tem;

    cin >> tem.roll >> tem.name >> tem.section >> tem.math_marks >> tem.cls;

    if (i == 1) {
      topper = tem;
    } else {
      if (tem.math_marks > topper.math_marks) {
        topper = tem;
      } else if (tem.math_marks == topper.math_marks) {
        if (tem.roll < topper.roll) {
          topper = tem;
        }
      }
    }
  }
  cout << topper.roll << " " << topper.name << " " << topper.section << " "
       << topper.math_marks << " " << topper.cls << endl;
  return 0;
}

/*
3
1 salman A 80 8
3 atiq A 95 8
2 akbar A 95 8
*/