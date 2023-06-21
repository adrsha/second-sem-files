#include <iostream>
#include <string>
using namespace std;
class Student {
  int sub[5];

public:
  Student() {
    for (int i = 0; i < 5; i++) {
      cout << "Enter the marks for sub" << i + 1;
      cin >> sub[i];
    }
  }
  bool ispass() {
    for (int i = 0; i < 5; i++) {
      if (sub[i] < 45) {
        return 0;
      }
    }
    return 1;
  }
};
int main() {
  int n;
  cout << "Enter the no of students!" << endl;
  cin >> n;
  Student *std = new Student[n];
  for (int i = 0; i < 5; i++) {
    if (std[i].ispass()) {
      cout << i << ", you passed!";
    } else {
      cout << i << ", you failed!";
    }
  }
  return 0;
}
