#include <iostream>
using namespace std;

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  cout << sizeof(myInt) << " bytes" << "\n"; // Int are usually stored at 4 bytes in RAM
  cout << sizeof(myFloat) << " bytes" << "\n"; // Floats are usually stored at 4 bytes in RAM
  cout << sizeof(myDouble) << " bytes" << "\n"; // Doubles are usually stored at 8 bytes in RAM
  cout << sizeof(myChar) << " bytes" << "\n"; // Chars are usually stored at 1 byte in RAM

  return 0;
}
