#include <iostream>
using namespace std;

class _class_ {
  int val;

public:
  _class_() {
    cout << "For new object: " << endl;
    cin >> val;
  }

  int operator++() {
    val++;
    return val;
  }

  void display() { cout << val << endl; }
};
int main() {

  _class_ _obj1_;
  _class_ _obj2_;
  cout << ++_obj1_;
  _obj2_.display();

  return 0;
}
