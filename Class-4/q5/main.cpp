#include <iostream>
using namespace std;
class Static {
public:
  static int count;
  Static() { count++; }
};
int Static::count;
int main() {
  Static ob1;
  Static ob2;
  Static ob3;
  Static ob4;
  Static ob5;
  cout << "No of objs = " << Static::count;

  return 0;
}
