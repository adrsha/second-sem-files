#include <iostream>
using namespace std;

class Teacher {
  int age;
  int id;

public:
  static int count;
  static int dccount;
  Teacher() {
    cout << "Enter age and id: ";
    cin >> age >> id;

    count++;
  }
  ~Teacher() { dccount++; }

  static int getCount() { return count; }
  const void showdata() {
    if (id < 0) {
      age = ((age - 20) < 0) ? (20 - age) : (age - 20);
    }
    cout << "Age is: " << age;
  }
};
int Teacher::count;
int Teacher::dccount;
int main() {

  Teacher t1;
  t1.showdata();
  cout << "Count: " << Teacher::getCount();
  return 0;
}
