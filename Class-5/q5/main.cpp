#include <iostream>
using namespace std;

class Distance {
  int feet;

public:
  Distance() {
    cout << "For new object: " << endl;
    cin >> feet;
  }

  Distance operator++(int) {
    feet++;
    return *this;
  }

  void display() { cout << feet << endl; }
};
int main() {

  Distance dist1;
  Distance dist2;

  dist2 = dist1++;
  dist1.display();
  dist2.display();

  return 0;
}
