#include <iostream>
using namespace std;

class variables {
  float pi;
  float e;

public:
  variables(float p, float eu) : pi(p), e(eu) {}

  const float new_var(float a) { return a; }
};
int main() {
  const variables v1(3.1415, 2.71828);
  variables v2(3.1415, 2.71828);
  v2.new_var(12.5);
  return 0;
}
