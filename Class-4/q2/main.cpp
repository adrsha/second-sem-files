#include <iostream>
using namespace std;

class Time {

  int sec, min, hour;

public:
  Time() {}
  Time(int sec, int min = 2, int hour = 3) {
    this->sec = sec;
    this->min = min;
    this->hour = hour;
  }
  Time add(Time t1, Time t2) {
    int totalsec = t1.sec + t2.sec + t1.min * 60 + t2.min * 60 +
                   t1.hour * 3600 + t2.hour * 3600;
    this->sec = totalsec % 60;
    this->min = (totalsec / 60) % 60;
    this->hour = totalsec / 3600;
    return *this;
  }
  void display() {
    cout << "Total time = " << hour << ":" << min << ":" << sec;
  }
};

int main() {
  Time t1(12, 23, 34);
  Time t2(22);
  Time t3;
  Time *ptr = &t3;
  ptr->add(t1, t2);
  ptr->display();
  return 0;
}
