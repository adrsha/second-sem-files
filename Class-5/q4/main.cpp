#include <iostream>
using namespace std;

class _class_ {
  int val;

public:
  _class_() {
    cout << "For new object: " << endl;
    cin >> val;
  }

  void operator++() { val++; }

  void display() { cout << val << endl; }
};
int main() {

  _class_ _obj1_;
  _class_ _obj2_;
  ++_obj2_;
  _obj1_.display();
  _obj2_.display();

  return 0;
}
