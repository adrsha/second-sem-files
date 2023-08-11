#include <iostream>
#include <string>
using namespace std;

class Media {
  string title;
  float price;

public:
  Media(){};
  Media(string t, float p) : title(t), price(p) {}
};

class Book : public Media {
  int no_of_pages;

public:
  Book(){};
  Book(int n) : no_of_pages(n) {}
};
int main() { return 0; }
