#include <iostream>
using namespace std;
/**
* This program will find the sum of 2 positive integers and return the position of two
* indeces.
*/

int main()
{
  unsigned int depth, firstIndex, secondIndex, sum, ExpectedSum;
  unsigned int dataArray[10];
  cout << "Enter the Depth of the Array" << endl;
  cin >> depth;
  cout << "Enter the Array Elements" << endl;
  for (unsigned int i = 0; i < depth; i++)
    cin >> dataArray[i];
  cout << "Enter the Expected Sum of Two Numbers" << endl;
  cin >> ExpectedSum;
  
  unsigned int initPtr, endPtr;
  initPtr = 0;
  endPtr = depth-1;
  bool found = false;
  while(initPtr != endPtr)
  {
    if ((dataArray[initPtr] + dataArray[endPtr]) == ExpectedSum)
    {
      cout << "Found the Sum, Position is: " << initPtr << " and " << endPtr << endl;
      found = true;
      break;
    }
    else
    {
      if ((dataArray[initPtr] + dataArray[endPtr]) > ExpectedSum)
        endPtr-=1;
       else
        initPtr+=1;
    }
  }
  if (found == false)
    cout << "Could not find the 2 integers that forms the expected sum" << endl;
}
