#include <iostream>
using namespace std;

template <class T1> void test_func(T1 a, T1 b) {
  a = a + b;
  cout << a;
}

int main() {
  test_func(2, (int)'a');
  return 0;
}
