#include <fstream>
#include <iostream>
using namespace std;

class person {
  char name[40];
  int age;

public:
  void getdata() {
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;
  }
  void showdata() {
    cout << "\nName:" << name;
    cout << "\nAge:" << age;
  }
};
int main() {
  person pers;
  char ch;
  ch = 'Y';
  ofstream outfile("Person.txt");
  while (ch == 'Y' || ch == 'y') {
    pers.getdata();
    outfile.write((char *)&pers, sizeof(pers));
    // outfile.write(reinterpret_cast<char *>(&pers), sizeof(pers));
    cout << "Do you want to continue?(y/n) ";
    cin >> ch;
  }
  // outfile.seekg(0);
  ifstream ifile("Person.txt");
  while (!ifile.eof()) {
    ifile.read((char *)&pers, sizeof(pers));
    pers.showdata();
  }
}
