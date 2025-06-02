#include <iostream>
using namespace std;
class Student {
public:
  char name[100];
  int roll;
  double gpa;
};

int main() {

  Student a, b;
  //* without space in character we can input directly
  // arif 11 2.3
  // cin >> a.name >> a.roll >> a.gpa; // arif 11 2.3
  // cin >> b.name >> b.roll >> b.gpa;

  // cout << a.name << " " << a.roll << " " << a.gpa << endl;
  // cout << b.name << " " << b.roll << " " << b.gpa << endl;

  //* with space name input using getline

  cin.getline(a.name, 100);
  cin >> a.roll >> a.gpa;

  // getline catch the space,enter,gap but cin ignore this thats why, use
  cin.ignore();

  cin.getline(b.name, 100);
  cin >> b.roll >> b.gpa;
  /*
  arif Ahmed
   11 2.3
   sakib Ahmed
   10 3.4
  */
  cout << a.name << " " << a.roll << " " << a.gpa << endl;
  cout << b.name << " " << b.roll << " " << b.gpa << endl;

  return 0;
}