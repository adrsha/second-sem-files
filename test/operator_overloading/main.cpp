#include <iostream>
using namespace std;

class number {

public:
  int x;
  friend number operator+(number, number);
  number(int y) { this->x = y; }
  number() {
    cout << "Enter a no. ";
    cin >> x;
  }
};

number operator+(number a, number b) {
  number temp(0);
  temp.x = a.x + b.x;
  return temp;
}

int main() {
  number n;
  number s = 2 + n;
  s = s + n + 2;
  cout << s.x;
  return 0;
}
