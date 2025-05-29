#include <iostream>
#include <string.h>
using namespace std;
class Student {
public:
  int id;
  char name[100];
  int roll;
};

int main() {
  Student Rahim;
  Rahim.id = 23;
  char temp[100] = "Rahim";
  strcpy(Rahim.name, temp);
  Rahim.roll = 23;
  cout << Rahim.id << Rahim.name << Rahim.roll << endl;

  return 0;
}