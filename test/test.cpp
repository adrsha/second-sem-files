#include <iostream>
#include <typeinfo>

class Base {
public:
  virtual ~Base() {}
  virtual void print() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
  void print() override { std::cout << "Derived class" << std::endl; }
};

int main() {
  Base *basePtr = new Derived;

  // Using typeid to get type information
  if (typeid(*basePtr) == typeid(Base)) {
    std::cout << "Pointer points to Base class" << std::endl;
  } else if (typeid(*basePtr) == typeid(Derived)) {
    std::cout << "Pointer points to Derived class" << std::endl;
  }

  // Using dynamic_cast for type casting
  Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
  if (derivedPtr) {
    std::cout << "Dynamic cast successful" << std::endl;
  } else {
    std::cout << "Dynamic cast failed" << std::endl;
  }

  delete basePtr;
  return 0;
}
