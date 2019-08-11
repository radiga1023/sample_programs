/*
Example: n = 16 given so binary of the 16 is 10000 now we shift the 3 bit right, now we have 00010 so again we shift the 3 bit left, 
then we have 10000 now compare with the given number first 16==16 in binary so it true so the number is divisible by 8.
*/

// C++ program to check whether 
// the number is divisible by 
// 8 or not using bitwise operator 
#include <bits/stdc++.h> 
using namespace std; 

// function to check number is 
// div by 8 or not using bitwise 
// operator 
int Div_by_8(int n) 
{ 
	return (((n >> 3) << 3) == n); 
} 

// Driver program 
int main() 
{ 
	int n = 16; 
	if (Div_by_8(n)) 
		cout << "YES" << endl; 
	else
		cout << "NO" << endl; 
	return 0; 
} 
