#include <iostream>
using namespace std;
class Centimeter {
  float cm;

public:
  Centimeter() {
    cout << "Enter length in cm." << endl;
    cin >> cm;
  }
  float getCm() { return cm; }
};
class Meter {
  float m;

public:
  Meter(float cm) { m = cm / 1000.0; }
  Meter(Centimeter cm) { m = cm.getCm() / 1000.0; }
  void display() { cout << "In meter: " << m; }
};
int main() {
  Centimeter c1;
  Meter m1 = c1;
  m1.display();
  return 0;
}
