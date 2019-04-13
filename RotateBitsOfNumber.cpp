#include <iostream>
using namespace std;

unsigned int rotateBitsOfNumber(unsigned int Number, unsigned int ShiftPosition)
{
  return ((Number << ShiftPosition) | (Number >> (32 - ShiftPosition)));
}

int main()
{
  unsigned int Number = 0xFF000000;
  cout << " Original Number: 0x" << hex << Number << " \nRotated Number: 0x"<< hex << rotateBitsOfNumber(Number, 4);
  return 0;
}
