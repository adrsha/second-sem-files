#include <iostream>
#include <iterator>
#define PI 3.1415
using namespace std;

class Radian {
  float val;

public:
  Radian(float f) : val(f) {}
};
class Degree {
  float val;

public:
  Degree() {
    cout << "Enter the degree";
    cin >> val;
  }
  operator Radian() { return Radian(val); }
};
int main() {
  Degree d1;
  Radian r1 = d1;

  return 0;
}
