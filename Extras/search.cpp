#include <fstream>
#include <iostream>
using namespace std;

class person {
  char name[40];
  int age;

public:
  void showdata() {
    cout << "Name: " << name;
    cout << "\nAge: " << age;
  }
};
// Just search withoout input
int main() {
  person pers;
  ifstream infile;
  infile.open("text.txt");
  infile.seekg(0, ios::end);
  int endposition = infile.tellg();
  cout << endposition << endl;
  cout << sizeof(person);
  int n = endposition / sizeof(person);
  cout << "\n There are" << n << " persons in file";
  cout << "Enter person no. ";
  cin >> n;
  int position = (n - 1) * sizeof(person);
  infile.seekg(position);
  infile.read((char *)&pers, sizeof(pers));
  pers.showdata();
  return 0;
}
