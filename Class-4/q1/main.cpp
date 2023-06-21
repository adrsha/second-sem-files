#include <iostream>
using namespace std;
class Subjects {
  int marks;

public:
  static int avg;
  int getmarks() { return marks; }
  void putmarks(int a) { marks = a; }
};
int main() {
  int n = 5;
  int input;
  Subjects *subs = new Subjects[n];
  bool ispass = true;
  for (int i = 0; i < n; i++) {
    cout << "Input the marks of subject " << i << endl;
    cin >> input;
    subs[i].putmarks(input);
    if (subs[i].getmarks() <= 45) {
      ispass = false;
    }
  }
  if (ispass) {
    cout << "You pass!" << endl;
  } else {
    cout << "You fail!" << endl;
  }

  return 0;
}
