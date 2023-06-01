#include <iostream>
#include <math.h>
#include <sys/select.h>
using namespace std;
// WAP to calcuulate the area of circle, rectangle and triangle with overload
// function overloading

float area(float r) { return (3.141526 * r * r); }

float area(float l, float b) { return (l * b); }

float area(float a, float b, float c) {
  float s = (a + b + c) / 2;
  return (sqrt(s * (s - a) * (s - b) * (s - c)));
}

int main() {
  int r, l, b, A, B, C;
  char s[20];
  cout << "Enter the length and base of your rectangle. ";
  cin >> l >> b;
  cout << "Enter the radius of your circle.";
  cin >> r;
  cout << "Enter the side lengths of triangle.";
  cin >> A >> B >> C;

  cout << "For circle " << area(r);
  cout << "For rectangle " << area(l, b);
  cout << "For triangle " << area(A, B, C);
  return 0;
}
