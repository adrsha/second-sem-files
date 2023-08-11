#include <iostream>
using namespace std;

template <class T> T get_sum(T a, T b) { return a + b; }
int main() {
  int a, b;
  float i, j;
  cout << "Enter your integers ";
  cin >> a >> b;
  cout << "Enter your float ";
  cin >> i >> j;
  cout << "\nYour integer Sum:" << get_sum(a, b);
  cout << "\nYour float Sum:" << get_sum(i, j);
  return 0;
}
