#include <iostream>
using namespace std;

class Course {
protected:
  int marks;

public:
  Course() {
    cout << "Enter the marks (Course): ";
    cin >> marks;
  }
};
class Science : public Course {
protected:
  int noOfExperiments;

public:
  Science() {

    cout << "Enter the noOfExperiments (Science): ";
    cin >> noOfExperiments;
  }
};
class Mathematics : public Course {
protected:
  int noOfTheorems;

public:
  Mathematics() {

    cout << "Enter the noOfTheorems (Maths): ";
    cin >> noOfTheorems;
  }
};
class Engineering : public Course {
protected:
  int noOfProjects;

public:
  Engineering() {
    cout << "Enter the noOfProjects (Maths): ";
    cin >> noOfProjects;
  }
};

class Physics : public Science {
protected:
  int noOfPulleys;

public:
  Physics() {

    cout << "Enter the noOfPulleys (Physics): ";
    cin >> noOfPulleys;
  }
};
class Chemistry : public Science {
protected:
  int noOfChemicals;

public:
  Chemistry() {

    cout << "Enter the noOfChemicals (Chemistry): ";
    cin >> noOfChemicals;
  }
};
int main() {
  Chemistry c;
  Mathematics m;
  Physics p;
  Engineering e;

  return 0;
}
