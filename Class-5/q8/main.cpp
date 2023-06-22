#include <iostream>
using namespace std;

class data2;
class data1 {
  int a, b;
  friend void Swap(data1 &, data2 &);

public:
  data1() {}

  void display() {
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
  }
};

class data2 {
  int a, b;
  friend void Swap(data1 &, data2 &);

public:
  data2() {}

  void display() {
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
  }
};

void Swap(data1 &d1, data2 &d2) {
  int t;
  t = d1.a;
  d1.a = d2.a;
  d2.a = t;
}
int main() {

  data1 d1;
  data2 d2;

  Swap(d1, d2);
  d1.display();
  return 0;
}
