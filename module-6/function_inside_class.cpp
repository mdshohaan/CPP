#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int roll;
  int math;
  int bangla;

  Student(string name, int roll, int math, int bangla) {
    this->name = name;
    this->roll = roll;
    this->math = math;
    this->bangla = bangla;
  }
  void total() {
    cout << "Total Marks Of " << name << " " << math + bangla << endl;
  }
};

int main() {
  Student sakib("Sakib ahmed", 5, 67, 89);
  sakib.total();
  Student rakib("Rakib Ahmed", 10, 80, 90);
  rakib.total();
  return 0;
}