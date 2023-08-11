#include <iostream>
#include <iterator>
using namespace std;

int add(int a, int b) { return (a + b); }
class celcius {
  float val;

public:
  celcius() {
    cout << "Enter value for celcius: ";
    cin >> val;
  }
  operator float() { return val * (9 / 5.0) + 32; }
};
int main() {
  celcius c1;
  float f1 = c1;
  cout << f1;
  return 0;
}
