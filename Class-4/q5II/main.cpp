#include <iostream>
#include <string>
using namespace std;
class Student {
  int age;
  string name;

public:
  Person() {
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
  }
  void showdata() {
    cout << "Your name is: " << name << " and your age is: " << age << endl;
  }
};
int main() {
  Person p1;
  p1.showdata();

  return 0;
}
