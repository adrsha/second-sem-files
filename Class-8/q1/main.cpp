// I can solve ambiguity in multiple inheritance by uing function overloading or
// using the scope resolution operators
#include <cmath>
#include <iostream>
using namespace std;

class Top1 {
  int power = 0;

public:
  void showPower() { cout << "\nTop1 Power: " << power; }
};

class Top2 {
  int power = 1;

public:
  void showPower() { cout << "\nTop2 Power: " << power; }
};

class Bot : public Top1, public Top2 {
  int power2 = 2;

public:
  void sPower() { cout << "\nBot Power: " << power2; }
};

int main() {
  Bot b;
  b.sPower();
  b.Top1::showPower();
  b.Top2::showPower();

  return 0;
}
