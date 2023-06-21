#include <iostream>
using namespace std;

class _class_ {
public:
  static int count;
  _class_() { count++; }
  ~_class_() { count--; }
};
int _class_::count;
int main() {
  {
    _class_ obj1;
    _class_ obj2;
    _class_ obj3;

    cout << "\nNo of objects = " << _class_::count;
  }
  cout << "\nNo of objects = " << _class_::count;
  return 0;
}
