#include <iostream>
#include <string>
using namespace std;

class person {
protected:
  int age;
  string name;

public:
  person() {
    cout << "Enter your name and your age.  ";
    cin >> name >> age;
  }
};

class Student : public person {
protected:
  int rollNo;
  string Section;

public:
  Student() {
    cout << "For a student!" << endl;
    cout << "Enter your roll no. ";
    cin >> rollNo;
    cout << "Enter your section. ";
    cin >> Section;
  }
};

class teachingStaff : public person {
protected:
  string sec;
  string subject;

public:
  teachingStaff() {
    cout << "For a teacher!" << endl;
    cout << "Enter your class section. ";
    cin >> sec;
    cout << "Enter your subject. ";
    cin >> subject;
  }
};

class nonTeachingStaff : public person {
protected:
  int id;
  string job;

public:
  nonTeachingStaff() {
    cout << "For a non teaching staff!" << endl;
    cout << "Enter your id. ";
    cin >> id;
    cout << "Enter your job";
    cin >> job;
  }
};

int main() {
  Student C;
  teachingStaff T;
  nonTeachingStaff N;
  return 0;
}
