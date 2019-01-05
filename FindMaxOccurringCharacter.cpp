#include <iostream>
#include <string>
#include <vector>
using namespace std;

char CheckMaxOccurranceInAString(std::string myString)
{
  unsigned int max = 0;
  unsigned int count[256];
  unsigned int length = myString.length();
  char result = 0;
  
  for(unsigned int i = 0; i < length; i++)
  {
    count[(unsigned int)myString[i]]++;
    if (max < count[(unsigned int)myString[i]])
    {
      max = count[(unsigned int)myString[i]];
      result = myString[i];
    }
  }
  return result;
}

int main()
{
  char myChar[1];
  std::string testString = "This Is a Test Program";
  
  myChar[0] = CheckMaxOccurranceInAString(testString);
  cout << "Maximum Occurring Character is: " << myChar[0] << endl;
  return 0;
}
