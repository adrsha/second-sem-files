#include <iostream>
using namespace std;
class Time {
  int hr, min, sec;

public:
  Time(bool) {}
  Time() {
    cout << "Enter the time! (hr, min, sec): ";
    cin >> hr >> min >> sec;
  }
  Time add(Time t1, Time t2) {
    Time temp(0);
    int total =
        t1.sec + t2.sec + (t1.hr + t2.hr) * 3600 + (t1.min + t2.min) * 60;
    temp.sec = total % 60;
    temp.min = (total / 60) % 60;
    temp.hr = (total / 60) / 60;

    return temp;
  }
  void showTime() { cout << hr << ":" << min << ":" << sec << endl; }
};

int main() {
  Time t1, t2, t3(0);
  t3 = t3.add(t1, t2);
  t3.showTime();
  return 0;
}
