#include <iostream>
using namespace std;

class celcius {
public:
  float val;
  celcius(){};
  celcius(float f1) { val = (f1 - 32) * 5 / 9; }
};
int main() {
  celcius c1;
  float f1;
  cout << "Enter fahrenheit: ";
  cin >> f1;
  c1 = f1;
  cout << c1.val;
  return 0;
}
