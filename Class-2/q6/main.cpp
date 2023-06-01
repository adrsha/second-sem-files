#include <iostream>
using namespace std;
// WAP that shows the concepts of inline function

inline int inlineFunction() { return 42; }
void normalFunction() {
  for (int i = 0; i < 12; i++) {
    cout << i << "\n";
  }
}

int main() {

  cout << "An inline function cant run loops. \n";
  cout << inlineFunction();

  cout
      << "\nWhereas a nomal function has the benefit of being able to do so.\n";
  normalFunction();

  return 0;
}
