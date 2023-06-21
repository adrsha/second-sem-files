#include <iostream>
using namespace std;
// WAP to create a class name Database for storage of personal information.

class Intel {

  char name[20];
  int phNo;
  char address[20];

public:
  Intel() {
    cout << "Enter your data. (name, phone number, address): \n";
    cin >> name >> phNo >> address;
  }
  void showdata() {
    cout << "Your data: \nName:" << name << "\nPhone Number:" << phNo
         << "\nAddress:" << address << endl;
  }
};

int main() {
  Intel person1;
  person1.showdata();

  return 0;
}
