#include <iostream>
#include <utility>
using namespace std;

int main() {
  int n;
  int c = 0;
  cout << "Enter your number" << endl;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      c++;
    }
  }
  if (c == 2) {
    cout << "It is prime";
  } else {
    cout << "It is not prime";
  }
  return 0;
}
