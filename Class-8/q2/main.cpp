#include <iostream>
using namespace std;

class GrandParent {
public:
  char cast[20] = "Sharma";
};

class Parent1 : public virtual GrandParent {
public:
  int IQ = 200;
};

class Parent2 : public virtual GrandParent {
public:
  int IQ = 200;
};
class Child : public Parent1, public Parent2 {
public:
  int badwords = 10;
  void showProp() {
    cout << "IQ" << Parent1::IQ << endl;
    cout << "Cast" << cast << endl;
  }
};

int main() {
  Child c1;
  c1.showProp();
  return 0;
}
