#include <iostream>
#include <string>
using namespace std;

class Parent1 {
  string name = "Sam";

public:
  void display() { cout << name << endl; }
  void over() { cout << "This is from Parent1" << endl; }
};
class Parent2 {
  string name = "Harry";

public:
  void display() { cout << name << endl; }
};

class Child : public Parent1, public Parent2 {
public:
  void show() {
    Parent1::display();
    Parent2::display();
    cout << "Child" << endl;
  }
  void over() { cout << "This is from Child" << endl; }
};

int main() {
  Child c1;
  c1.Parent1::display();
  c1.over();

  return 0;
}
