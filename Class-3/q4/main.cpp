#include <iostream>
using namespace std;
// Create a class called Student with three data members emp no, name, address)
// a method called read data() to take in the details of the employee from
// user, and a function called displaydata() to display the details of the
// employee. In main create two objects of class employee an for each object
// call the readdata() and display() methods.
//

class Student {
  char name[20];
  char faculty[20];
  int rollno;

public:
  void readdata() {
    cout << "Enter your Name" << endl;
    cin >> name;
    cout << "Enter your rollno" << endl;
    cin >> rollno;
    cout << "Enter your faculty" << endl;
    cin >> faculty;
  }
  void displaydata() {
    cout << "Your data is: \nName:" << name << "\nrollno:" << rollno
         << "\nfaculty:" << faculty << endl;
  }
};

int main() {
  Student Ram, Hari;
  Ram.readdata();
  Ram.displaydata();

  Hari.readdata();
  Hari.displaydata();
  return 0;
}
