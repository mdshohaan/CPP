#include <iostream>
using namespace std;

class Student {
public:
  int id;
  string name;
  char section;
  int total_marks;
};

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    Student Topper;
    int m = 3;
    for (int i = 0; i < m; i++) {
      Student Temp;
      cin >> Temp.id >> Temp.name >> Temp.section >> Temp.total_marks;
      if (i == 0) {
        Topper = Temp;
      } else {
        if (Temp.total_marks > Topper.total_marks) {
          Topper = Temp;
        } else if (Temp.total_marks == Topper.total_marks) {
          if (Temp.id < Topper.id) {
            Topper = Temp;
          }
        }
      }
    }

    cout << Topper.id << " " << Topper.name << " " << Topper.section << " "
         << Topper.total_marks << endl;
  }

  return 0;
}