#include <iostream>
using namespace std;

class Preeti {
protected:
  string title;

public:
  Preeti() {
    cout << "Enter the title" << endl;
    cin >> title;
  }
  void print() { cout << "Tittle is: " << title << endl; }
};

class classBook : public virtual Preeti {
protected:
  string accNo;

public:
  classBook() {
    cout << "Accession No: ";
    cin >> accNo;
  }
  void print() { cout << "Accession No is: " << accNo << endl; }
};
class classMagazine : public virtual Preeti {
protected:
  string volNo;

public:
  classMagazine() {
    cout << "Volume No: ";
    cin >> volNo;
  }
  void print() { cout << "Volume No is: " << volNo << endl; }
};

class classJournal : public classMagazine, public classBook {
protected:
  string name;

public:
  classJournal(string name) { this->name = name; }
  void print() {
    cout << "Title is" << title;
    cout << "Name is " << name;
  }
};

int main() {

  classJournal cj1("IEEEOOP");
  cj1.print();

  return 0;
}
