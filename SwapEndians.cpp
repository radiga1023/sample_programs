// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int x = 0x12345678;
  
  int h = 24;
  int l = 0;
  int Mask = 0;
  
  while(l < h)
  {
      Mask  = ((x & (0xFF << l)) >> l) ^ ((x & (0xFF << h)) >> h) ;
      x = x ^ ((Mask << l) | (Mask << h));
      l+=8;
      h-=8;
  }
  cout << hex << x << endl;
  return 0;
}
