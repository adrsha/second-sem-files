#include <iostream>
using namespace std;

struct Date {
  int m;
  int d;
  int y;
} d;

void display(struct Date);

int main() {
  cout << "Enter your month" << endl;
  cin >> d.m;
  cout << "Enter your day" << endl;
  cin >> d.d;
  cout << "Enter your year" << endl;
  cin >> d.y;

  display(d);
  return 0;
}

void display(struct Date r) {
  cout << "Your date is: " << r.m << "/" << r.d << "/" << r.y << "/";
}
