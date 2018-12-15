#include <iostream>
using namespace std;

int main()
{
    unsigned int multiplier, enteredValue;
    cout << "Enter the Multiplier Number" << endl;
    cin >> multiplier ;
    cout << "Enter the Number to check if multiple or not" << endl;
    cin >> enteredValue;
    
    if ((enteredValue % multiplier) == 0)
      cout << "SUCCESS: Entered number is in multiples of " << multiplier << endl;
    else
      cout << "FAILURE: Entered number is notin multiples of " << multiplier << endl;
}
