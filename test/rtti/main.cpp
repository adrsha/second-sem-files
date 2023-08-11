#include <iostream>
using namespace std;

class Num {
protected:
  int val;

public:
  Num() {
    cout << "Enter the number value. ";
    cin >> val;
  }
  virtual void display() = 0;
};

class Real : public Num {
  int isReal;

public:
  Real() { isReal = 1; }
  void display() { cout << val; }
};

int main() {
  Num *n1;
  Real r1;
  n1 = &r1;
  n1->display();
  return 0;
}
