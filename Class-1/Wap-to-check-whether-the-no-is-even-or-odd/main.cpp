#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter your number\n";
  cin >> n;

  if (n % 2 == 0) {
    cout << "Your number was even";
  } else {
    cout << "Your number was odd";
  }
  return 0;
}
