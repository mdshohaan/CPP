#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
  string name;
  int roll;
  int marks;
};

// custom compare function asc order
bool cmp(Student l, Student r) {

  if (l.marks == r.marks) {
    return l.roll < r.roll;
  } else {
    return l.marks > r.marks;
  }

  // return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
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

  sort(arr, arr + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].marks << " " << arr[i].roll << endl;
  }

  return 0;
}

/* input
5
rakib Ahmed
3 90
sakib Ahmed
2 49
arif Ahmed
5 76
kahil Ahmed
4 49
afif Ahmed
1 90

*/

/* output
afif Ahmed 90 1
rakib Ahmed 90 3
arif Ahmed 76 5
sakib Ahmed 49 2
kahil Ahmed 49 4

*/