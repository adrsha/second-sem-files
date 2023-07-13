#include <iostream>
#include <string>

using namespace std;

class Lecturer {
public:
  int id;
  string name;

  void readdata() {
    cout << "Name and id" << endl;
    cin >> name >> id;
  }

  void printdata() { cout << "Name " << name << endl << "Id " << id << endl; }
};

class parttime : public Lecturer {
public:
  float payperhr;

  void readdata() {
    Lecturer::readdata();
    cout << "Pay per hr" << endl;
    cin >> payperhr;
  }

  void printdata() {
    Lecturer::printdata();
    cout << "Pay per hr " << payperhr << endl;
  }
};

class fulltime : public Lecturer {
public:
  float paypermonth;

  void readdata() {
    Lecturer::readdata();
    cout << "Pay per month" << endl;
    cin >> paypermonth;
  }

  void printdata() {
    Lecturer::printdata();
    cout << "Pay per month " << paypermonth << endl;
  }
};

int main() {
  parttime A;
  fulltime B;

  A.readdata();
  cout << endl;

  B.readdata();
  cout << endl;

  A.printdata();
  cout << endl;

  B.printdata();
  cout << endl;

  return 0;
}
