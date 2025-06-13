#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int cls;
  char section;
  int id;
};

int main() {

  int t;
  cin >> t;
  Student arr[t];
  for (int i = 0; i < t; i++) {
    cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
  }

  int i = 0, j = t - 1;
  while (i < j) {
    swap(arr[i].section, arr[j].section);
    i++;
    j--;
  }

  for (int i = 0; i < t; i++) {
    cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " "
         << arr[i].id << endl;
  }

  return 0;
}