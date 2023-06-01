#include <iostream>
using namespace std;
// WAP to calculate the average of different numbers entered by user using the
// concept of DMA
int main() {
  int n;
  int sum = 0;
  cout << "Enter the number of numbers you wanna enter. \n";
  cin >> n;
  int *nums = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  for (int i = 0; i < n; i++) {
    sum = sum + nums[i];
  }
  cout << "\nAverage = " << sum / n;
  delete[] nums;
  return 0;
}
