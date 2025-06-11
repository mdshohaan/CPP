//* without space input
// 2
// rakib 3 90
// sakib 2 49

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
    cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
  }

  return 0;
}

//* WITH SPACE INPUT
// 2
// rakib Ahmed
// 3 90
// sakib Ahmed
// 2 49

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
  for (int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
  }

  return 0;
}