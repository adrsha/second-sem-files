#include <iostream>
using namespace std;
// WAP that swaps two numbers using reference variables and normal variables
// concept of reference variable

void swapref(int &a, int &b) {
  int t;
  t = a;
  a = b;
  b = t;
}

void swapnorm(int a, int b) {
  int t;
  t = a;
  a = b;
  b = t;
  cout << "Normal swapping\n";
  cout << "a= " << a << ", b= " << b;
}

int main() {
  int a, b;
  cout << "Enter your numbers. \n";
  cin >> a >> b;
  swapnorm(a, b);
  swapref(a, b);
  cout << "\nReference swapping\n";
  cout << "a= " << a << ", b= " << b;
  return 0;
}
