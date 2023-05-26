#include <iostream>
using namespace std;

namespace people {
char student[12] = "Adarsha";
char teacher[12] = "SSD";
} // namespace people

namespace work {
char student[12] = "learning";
char teacher[12] = "taught";
} // namespace work

int main() {
  cout << people::student << " is being " << work::teacher << " by "
       << people::teacher << endl;

  return 0;
}
