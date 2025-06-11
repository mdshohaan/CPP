#include <algorithm>
#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int roll;
  int marks;
};

int main() {

  int n;
  cin >> n;
  Student arr[n];

  for (int i = 0; i < n; i++) {
    cin.ignore();
    getline(cin, arr[i].name);
    cin >> arr[i].roll >> arr[i].marks;
  }

  //  int mn = INT_MAX;
  Student mn;
  mn.marks = INT_MAX;
  for (int i = 0; i < n; i++) {
    // mn = min(arr[i].marks, mn); //49
    if (arr[i].marks < mn.marks) {
      mn = arr[i];
    }
  }
  cout << mn.name << " " << mn.marks << " " << mn.roll; // sakib Ahmed 49 2

  return 0;
}
/*
2
rakib Ahmed
3 90
sakib Ahmed
2 49
arif Ahmed
5 76
*/