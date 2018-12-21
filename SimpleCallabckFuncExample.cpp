#include <iostream>
using namespace std;

void function()
{
	cout << "In Callback Function" << endl;
}

void callFromHere(void (*fun)())
{
    cout << "In callFromHere" << endl;
	fun();
}

int main()
{
	void (*func)() = function; //Creating the Function Pointer to the Function "function"
	callFromHere(func); //Parse the function Pointer
}
