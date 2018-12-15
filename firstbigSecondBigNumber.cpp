#include <iostream>
using namespace std;

int main()
{
  uint32_t array[10];
  uint32_t fbig, sbig, ArrayLen, tempVal;
  cout << "Enter the Depth of the Array" << endl;
  cin >> ArrayLen ;
  cout << "Enter the Elements for the Array" << endl;
  for (uint32_t i = 0; i < ArrayLen; i++)
  {
    cin >> array[i];
  }
  fbig = array[0];
  sbig = array[1];
  if (sbig > fbig)
  {
    tempVal = fbig;
    fbig = sbig;
    sbig = tempVal;
  }
  for (uint32_t i = 2; i < ArrayLen; i++)
  {
    if (array[i] > fbig)
    {
      sbig = fbig;
      fbig = array[i];
    }
    else if (array[i] != fbig && array[i] > sbig)
    {
      sbig = array[i];
    }
  }
  cout << "First Big: " << fbig << endl << "Second Big: " << sbig << endl;
}
