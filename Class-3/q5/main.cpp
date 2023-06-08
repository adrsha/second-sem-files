#include <iostream>
#include <math.h>
using namespace std;

class Area {
  float s;
  float A;

public:
  Area(float a, float b, float c) {
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
  }
  Area(float b, float h) { A = (1 / 2.0) * b * h; }
  float getArea() { return A; }
};

int main() {
  float n, a, b, c, h;
  cout << "How many variables do we have? ";
  cin >> n;

  if (n == 3) {
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    Area triangle(a, b, c);
    cout << "Your area is: " << triangle.getArea() << endl;
  } else if (n == 2) {
    cout << "Enter h, b: " << endl;
    cin >> h >> b;
    Area triangle(b, h);
    cout << "Your area is: " << triangle.getArea() << endl;
  }
  return 0;
}
