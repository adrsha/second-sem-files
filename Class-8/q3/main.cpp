
#include <iostream>
#include <string>

using namespace std;

class Cricketer {
public:
  string name;
  int age;
  int matches;

  void getdata() {
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Matches: ";
    cin >> matches;
  }

  void display() {
    cout << "Name: " << name << "\nAge: " << age << "\nMatches: " << matches;
  }
};

class bowler : public Cricketer {
public:
  int wickets;

  void getdata() {
    Cricketer::getdata();
    cout << "Wickets: ";
    cin >> wickets;
  }

  void display() {
    Cricketer::display();
    cout << "\nWickets: " << wickets << endl;
  }
};

class batsman : public Cricketer {
public:
  int runs;
  int centuries;

  void getdata() {
    Cricketer::getdata();
    cout << "Runs: ";
    cin >> runs;
    cout << "Centuries: ";
    cin >> centuries;
  }

  void display() {
    Cricketer::display();
    cout << "\nRuns: " << runs << "\nCenturies: " << centuries;
  }
};

int main() {
  bowler A;
  batsman B;

  cout << "Bowler" << endl;
  A.getdata();
  cout << endl;

  cout << "Batsman" << endl;
  B.getdata();
  cout << endl;

  cout << "Bowler" << endl;
  A.display();
  cout << endl;

  cout << "Batsman" << endl;
  B.display();
  cout << endl;

  return 0;
}
