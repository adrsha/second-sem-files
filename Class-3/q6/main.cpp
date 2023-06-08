#include <iostream>
using namespace std;

// Create a class Mountain with data members name, height, location, a
// constructor that initializes the members to the values passed it to the
// paramenters, a function called Cmpheight() to compare two objects and
// DispInf() to display the information of mountain. In main create two objects
// of the class mountain and print the information of the mountain which is
// greates height

class Mountain {
  char name[20];
  int height;
  char location[20];

public:
  Mountain() {
    cout << "Input the name, height and location of the mountain. " << endl;
    cin >> name;
    cin >> height;
    cin >> location;
  };
  void dispInf() {
    cout << "Your mountain, " << name << " is " << height
         << " meters tall, and lies in " << location << ".\n";
  }
  Mountain Cmpheight(Mountain &);
};
Mountain Mountain::Cmpheight(Mountain &m1) {
  if (this->height > m1.height) {
    return *this;
  }
  return m1;
}
int main() {
  Mountain a;
  Mountain b;
  a = a.Cmpheight(b);
  cout << "The Info about the tallest mountain is:" << endl;
  a.dispInf();

  return 0;
}
