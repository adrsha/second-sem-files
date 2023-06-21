#include <iostream>
#include <string>
using namespace std;

class complex {
  float real;
  float img;

public:
  complex(float accept) {}
  complex() {
    cout << "Enter your no a+ib : " << endl;
    cout << "a= ";
    cin >> real;
    cout << "b= ";
    cin >> img;
  }
  complex multiply(complex c1) {
    // (a + ib)(x+iy) = (ax-by) + (ay +bx)i;
    complex temp(1.0);
    temp.real = c1.real * real - c1.img * img;
    temp.img = c1.real * img + c1.img * real;
    return temp;
  }
  complex divide(complex c2) {
    // (a+ib)/(x+iy) = (a+ib)(x-iy) / x2 + y2
    complex temp(2.0);
    temp.real =
        (real * c2.real + img * c2.img) / (c2.real * c2.real + c2.img * c2.img);
    temp.img =
        (img * c2.real - real * c2.img) / (c2.real * c2.real + c2.img * c2.img);

    return temp;
  }
  complex addition(complex c1) {
    this->real = this->real + c1.real;
    this->img = this->img + c1.img;
    return *this;
  }

  complex subtraction(complex c1) {
    this->real = this->real - c1.real;
    this->img = this->img - c1.img;
    return *this;
  }
  void displayval() {
    cout << "The final value is: " << real << "+" << img << "i.";
  }
};

int main() {
  complex a, b;
  char op;
  cout << "What operation do you want to perform? ";
  cin >> op;
  if (op == '*') {
    b = a.multiply(b);
  } else if (op == '/') {
    b = a.divide(b);
  } else if (op == '+') {
    b = a.addition(b);
  } else if (op == '-') {
    b = a.subtraction(b);
  }
  b.displayval();

  return 0;
}
