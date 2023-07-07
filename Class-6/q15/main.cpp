#include <iostream>
using namespace std;

class City {
  char CityName[20];
  int DistFromKtm;

public:
  void setCityName() {
    cout << "Enter the name of your city. " << endl;
    cin >> CityName;
  }
  void setDistFromKtm() {
    cout << "Enter the Distance from ktm to your city. " << endl;
    cin >> DistFromKtm;
  }
  int operator-(City a) { return (DistFromKtm - a.DistFromKtm); }
  int operator+(City a) { return (DistFromKtm - a.DistFromKtm); }
};

int main() {
  City c1, c2, c3;
  c1.setCityName();
  c1.setDistFromKtm();
  c2.setCityName();
  c2.setDistFromKtm();

  cout << "Distance between those cities is: " << (c1 - c2);

  return 0;
}
