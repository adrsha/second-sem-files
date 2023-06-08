#include <iostream>
using namespace std;
// Create a class called Employee with three data members emp no, name, address)
// a method called read data() to take in the details of the employee from
// user, and a function called displaydata() to display the details of the
// employee. In main create two objects of class employee an for each object
// call the readdata() and display() methods.
//

class Employee {
  char name[20];
  char address[20];
  int empno;

public:
  void readdata() {
    cout << "Enter your Name" << endl;
    cin >> name;
    cout << "Enter your EmpNo" << endl;
    cin >> empno;
    cout << "Enter your Address" << endl;
    cin >> address;
  }
  void displaydata() {
    cout << "Your data is: \nName:" << name << "\nEmpNo:" << empno
         << "\nAddress:" << address << endl;
  }
};

int main() {
  Employee Ram, Hari;
  Ram.readdata();
  Ram.displaydata();

  Hari.readdata();
  Hari.displaydata();
  return 0;
}
