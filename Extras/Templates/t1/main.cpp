#include <iostream>
using namespace std;
// Templates

template <class T> T find_max(T a, T b) { return (a > b) ? a : b; }
int main() {
  int i = 10, j = 20;
  cout << endl << find_max(i, j);
  float a = 3.14, b = -6.28;
  cout << endl << find_max(a, b);
  char ch = 'A', dh = 'Z';
  cout << endl << find_max(ch, dh);
  double d = 1.1, e = 1.11;
  cout << endl << find_max(d, e);
  return 0;
}
