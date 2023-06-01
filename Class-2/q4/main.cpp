#include <iostream>
using namespace std;
// WAP that displays the current monthly salary of CEO, information officer,
// sustem analust and programmer that has been increased by 9% 10% 12% 12%
// concept of DMA
double ceo(float s = 80000, float t = 9) { return (s * (1 + t / 100)); }
double info(float s = 40000, float t = 10) { return (s * (1 + t / 100)); }
double sys(float s = 30000, float t = 12) { return (s * (1 + t / 100)); }
double prog(float s = 25000, float t = 12) { return (s * (1 + t / 100)); }
int main() {
  int job;
  float sal;
  cout << "What is your job?\n 1) CEO  2) Information officer  3) System "
          "analyst  4) Programmer \n (Enter the respective numbers) \n";
  cin >> job;
  cout << "Enter your salary: ";
  cin >> sal;
  if (job == 1) {
    cout << "Your new salary is: " << ceo(sal);
  } else if (job == 2) {
    cout << "Your new salary is: " << info(sal);
  } else if (job == 3) {
    cout << "Your new salary is: " << sys(sal);
  } else if (job == 4) {
    cout << "Your new salary is: " << prog(sal);
  }

  return 0;
}
