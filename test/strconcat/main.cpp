#include <iostream>
#include <string>
using namespace std;

class Str {
  string val;

public:
  Str() {
    cout << "What is the val? ";
    cin >> val;
  };
  Str(int){};

  string &getVal() { return val; }
  friend Str operator+(Str, Str);
};
Str operator+(Str a, Str b) {
  Str temp(1);
  temp.getVal() = a.getVal() + b.getVal();
  return temp;
}
int main() {
  Str s1, s2, s3(1);
  s3 = s1 + s2;
  cout << s3.getVal();
  return 0;
}
