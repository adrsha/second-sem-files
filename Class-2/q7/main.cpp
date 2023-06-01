#include <iostream>
using namespace std;
// WAP that illustrates the concept of enumerated data types

int main() {
  enum moods { happy, indifferent, anxious, sad };
  enum moods mood;
  mood = happy;
  cout << "mood = " << mood;
  return 0;
}
