#include <iostream>
#include <string>
using namespace std;

class person {
  int age;
  string name;

public:
  person() {
    cout << "Enter your name and your age.  ";
    cin >> name >> age;
  }
};

class Student : public person {
  int rollNo;
  string Section;

public:
  Student() {
    cout << "For a student!" << endl;
    cout << "Enter your roll no. ";
    cin >> rollNo;
    cout << "Enter your section. ";
    cin >> rollNo;
  }
};

class Employee : public person {
  int idNo;
  string job;

public:
  Employee() {
    cout << "For an Employee!" << endl;
    cout << "Enter your idno. ";
    cin >> idNo;
    cout << "Enter your job. ";
    cin >> job;
  }
};

int main() {
  Student C;
  return 0;
}
