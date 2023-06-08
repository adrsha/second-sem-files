#include <iostream>
using namespace std;
// Create Class person with data members Name, age, address and citizenship
// number. Write a constructor to initialize the value of the person. Assign
// citizenship number .if the age of the person is greater than 16 otherwise
// assign value zero to citizenship number. Also create a function to display
// the values.

class person {
  int age;
  int citizenshipNo;
  int phone;
  char name[20];
  char address[20];

public:
  person();
  void display() {
    cout << "Your data is: \nName: " << name << "\nAge: " << age
         << "\nphone:" << phone << "\naddress:" << address
         << "\nCitizenship Number:" << citizenshipNo << endl;
  }
};

person::person() {
  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Enter your address: " << endl;
  cin >> address;
  cout << "Enter your phone no: " << endl;
  cin >> phone;
  cout << "Enter your citizenship number: " << endl;
  cin >> citizenshipNo;
  if (citizenshipNo < 16) {
    citizenshipNo = 0;
  }
}

int main() {
  person Harry;
  Harry.display();
  return 0;
}
