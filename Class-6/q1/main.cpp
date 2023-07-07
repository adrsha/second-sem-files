#include <iostream>
using namespace std;

class parentClass {
  int x;

public:
  void display() { cout << "From Parent Class" << x; }
};

class childClass {
  int y;

public:
  void display() { cout << "From Child class"; }
};

int main() {
  childClass C;
  C.display();
  return 0;
}
