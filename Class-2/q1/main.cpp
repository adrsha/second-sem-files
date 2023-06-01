#include <iostream>
using namespace std;

// theory: function overloading
// WAP to calculate the volume of cube, cuboid and cylinder using the concept of
// function overloading.

int vol(int l) {
  // CUBE
  return (l * l * l);
}

int vol(int l, int b, int h) {
  // CUBOID
  return (l * b * h);
}

float vol(int r, int h) {
  // CYLINDER
  return (3.141526 * r * r * h);
}

int main() {

  int l, b, h, a, r;
  cout << "\nEnter the values for l, b, h (for cuboid): ";
  cin >> l >> b >> h;

  cout << "\nEnter the values for l (for cube): ";
  cin >> a;

  cout << "\nEnter the values for r, h (for cylinder): ";
  cin >> r >> b;

  cout << "\nVolume of cylinder = " << vol(r, b);
  cout << "\nVolume of cuboid = " << vol(l, b, h);
  cout << "\nVolume of cube = " << vol(a);
  return 0;
}
